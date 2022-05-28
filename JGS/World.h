#pragma once

namespace World
{
	static auto BaseAddr = (uintptr_t)GetModuleHandle(NULL);
	static auto NetDriverSetWorld = reinterpret_cast<void(*)(UNetDriver*, UWorld*)>(BaseAddr + 0x1AEFA50);
	static auto IpNetDriverInitListen = reinterpret_cast<bool(*)(UIpNetDriver*, void*, FURL, bool, FString&)>(BaseAddr + 0x2A72B50);
	static auto CreateNetDriver = reinterpret_cast<UNetDriver* (*)(UEngine*, UWorld*, FName)>(BaseAddr + 0x1D0CB60);

	UWorld* World;

	void Init(UWorld* World)
	{
		World = World;
	}

	bool Listen(FURL InURL)
	{
		auto NetDriver = (UIpNetDriver*)CreateNetDriver(Globals::FortEngine, World, FName(282));
		if (NetDriver) {
			NetDriverSetWorld(NetDriver, World);

			FString Error;
			if (!IpNetDriverInitListen(NetDriver, World, InURL, false, Error))
			{
				LOG("Failed to listen: " << Error.ToString());

				NetDriverSetWorld(NetDriver, NULL);
				World->NetDriver = NULL;

				return false;
			}
		}
		else {
			LOG("Failed to listen NetDriver was unable to spawn!");

			return false;
		}

		return true;
	}
}