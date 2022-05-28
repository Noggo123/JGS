#pragma once

// Fortnite (2.4.2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
template<typename Fn>
inline Fn GetVFunction(const void *instance, std::size_t index)
{
	auto vtable = *reinterpret_cast<const void***>(const_cast<void*>(instance));
	return reinterpret_cast<Fn>(vtable[index]);
}

class UObject;

struct TUObjectArray
{
	uint8_t* Objects;
	uint32_t MaxElements;
	uint32_t NumElements;

	inline int32_t Num()
	{
		return NumElements;
	}

	inline UObject* GetByIndex(int32_t id)
	{
		auto Offset = 24 * id;
		return *(UObject**)(Objects + Offset);
	}
};

template<class T>
struct TArray
{
	friend struct FString;

public:
	inline TArray()
	{
		Data = nullptr;
		Count = Max = 0;
	};

	inline int Num() const
	{
		return Count;
	};

	inline T& operator[](int i)
	{
		return Data[i];
	};

	inline const T& operator[](int i) const
	{
		return Data[i];
	};

	inline bool IsValidIndex(int i) const
	{
		return i < Num();
	}

	inline void Add(T InputData)
	{
		Data = (T*)realloc(Data, sizeof(T) * (Count + 1));
		Data[Count++] = InputData;
		Max = Count;
	};

	T* Data;
	int32_t Count;
	int32_t Max;
};

template<typename ElementType, int32_t MaxTotalElements, int32_t ElementsPerChunk>
class TStaticIndirectArrayThreadSafeRead
{
public:
	inline size_t Num() const
	{
		return NumElements;
	}

	inline bool IsValidIndex(int32_t index) const
	{
		return index < Num() && index >= 0;
	}

	inline ElementType const* const& operator[](int32_t index) const
	{
		return *GetItemPtr(index);
	}

private:
	inline ElementType const* const* GetItemPtr(int32_t Index) const
	{
		int32_t ChunkIndex = Index / ElementsPerChunk;
		int32_t WithinChunkIndex = Index % ElementsPerChunk;
		ElementType** Chunk = Chunks[ChunkIndex];
		return Chunk + WithinChunkIndex;
	}

	enum
	{
		ChunkTableSize = (MaxTotalElements + ElementsPerChunk - 1) / ElementsPerChunk
	};

	ElementType** Chunks[ChunkTableSize];
	int32_t NumElements;
	int32_t NumChunks;
};

struct FString : private TArray<wchar_t>
{
	inline FString()
	{
	};

	FString(const wchar_t* other)
	{
		Max = Count = *other ? std::wcslen(other) + 1 : 0;

		if (Count)
		{
			Data = const_cast<wchar_t*>(other);
		}
	};

	inline bool IsValid() const
	{
		return Data != nullptr;
	}

	inline const wchar_t* c_str() const
	{
		return Data;
	}

	std::string ToString() const
	{
		auto length = std::wcslen(Data);

		std::string str(length, '\0');

		std::use_facet<std::ctype<wchar_t>>(std::locale()).narrow(Data, Data + length, '?', &str[0]);

		return str;
	}
};

struct FName;

inline void (*FNameToString)(FName* This, FString& OutStr);
inline void (*FreeInternal)(__int64);

struct FName
{
	int32_t ComparisonIndex;
	int32_t Number;

	std::string ToString()
	{
		if (!this)
			return "";

		FString temp;

		FNameToString(this, temp);

		auto wName = std::wstring(temp.c_str());
		auto name = std::string(wName.begin(), wName.end());

		FreeInternal((__int64)temp.c_str());

		auto pos = name.rfind('/');
		if (pos == std::string::npos)
		{
			return name;
		}

		return name.substr(pos + 1);
	}
};

template<class TEnum>
class TEnumAsByte
{
public:
	inline TEnumAsByte()
	{
	}

	inline TEnumAsByte(TEnum _value)
		: value(static_cast<uint8_t>(_value))
	{
	}

	explicit inline TEnumAsByte(int32_t _value)
		: value(static_cast<uint8_t>(_value))
	{
	}

	explicit inline TEnumAsByte(uint8_t _value)
		: value(_value)
	{
	}

	inline operator TEnum() const
	{
		return (TEnum)value;
	}

	inline TEnum GetValue() const
	{
		return (TEnum)value;
	}

private:
	uint8_t value;
};

class FScriptInterface
{
private:
	UObject* ObjectPointer;
	void* InterfacePointer;

public:
	inline UObject* GetObject() const
	{
		return ObjectPointer;
	}

	inline UObject*& GetObjectRef()
	{
		return ObjectPointer;
	}

	inline void* GetInterface() const
	{
		return ObjectPointer != nullptr ? InterfacePointer : nullptr;
	}
};

template<class InterfaceType>
class TScriptInterface : public FScriptInterface
{
public:
	inline InterfaceType* operator->() const
	{
		return (InterfaceType*)GetInterface();
	}

	inline InterfaceType& operator*() const
	{
		return *((InterfaceType*)GetInterface());
	}

	inline operator bool() const
	{
		return GetInterface() != nullptr;
	}
};

struct FText
{
	char UnknownData[0x18];
};

struct FScriptDelegate
{
	char UnknownData[16];
};

struct FScriptMulticastDelegate
{
	char UnknownData[16];
};

template<typename Key, typename Value>
class TMap
{
	char UnknownData[0x50];
};

struct FWeakObjectPtr
{
public:
	bool IsValid() const;

	UObject* Get() const;

	int32_t ObjectIndex;
	int32_t ObjectSerialNumber;
};

template<class T, class TWeakObjectPtrBase = FWeakObjectPtr>
struct TWeakObjectPtr : private TWeakObjectPtrBase
{
public:
	inline T* Get() const
	{
		return (T*)TWeakObjectPtrBase::Get();
	}

	inline T& operator*() const
	{
		return *Get();
	}

	inline T* operator->() const
	{
		return Get();
	}

	inline bool IsValid() const
	{
		return TWeakObjectPtrBase::IsValid();
	}
};

template<class T, class TBASE>
class TAutoPointer : public TBASE
{
public:
	inline operator T*() const
	{
		return TBASE::Get();
	}

	inline operator const T*() const
	{
		return (const T*)TBASE::Get();
	}

	explicit inline operator bool() const
	{
		return TBASE::Get() != nullptr;
	}
};

template<class T>
class TAutoWeakObjectPtr : public TAutoPointer<T, TWeakObjectPtr<T>>
{
public:
};

template<typename TObjectID>
class TPersistentObjectPtr
{
public:
	FWeakObjectPtr WeakPtr;
	int32_t TagAtLastTest;
	TObjectID ObjectID;
};

struct FStringAssetReference_
{
	char UnknownData[0x10];
};

class FAssetPtr : public TPersistentObjectPtr<FStringAssetReference_>
{

};

template<typename ObjectType>
class TAssetPtr : FAssetPtr
{

};

struct FUniqueObjectGuid_
{
	char UnknownData[0x10];
};

class FLazyObjectPtr : public TPersistentObjectPtr<FUniqueObjectGuid_>
{

};

template<typename ObjectType>
class TLazyObjectPtr : FLazyObjectPtr
{

};
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
