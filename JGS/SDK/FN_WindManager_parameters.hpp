#pragma once

// Fortnite (1.7.2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WindManager.WindManager_C.CeilVector
struct AWindManager_C_CeilVector_Params
{
	float                                              Scale;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class USceneCaptureComponent2D*                    Scene_Capture;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function WindManager.WindManager_C.ActivateTestContent
struct AWindManager_C_ActivateTestContent_Params
{
	bool                                               Condition;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WindManager.WindManager_C.SetRenderOnlyAssets
struct AWindManager_C_SetRenderOnlyAssets_Params
{
	class UPrimitiveComponent*                         InComponent;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WindManager.WindManager_C.InitializeOrthoSettings
struct AWindManager_C_InitializeOrthoSettings_Params
{
};

// Function WindManager.WindManager_C.UserConstructionScript
struct AWindManager_C_UserConstructionScript_Params
{
};

// Function WindManager.WindManager_C.Add Render To Texture Particle
struct AWindManager_C_Add_Render_To_Texture_Particle_Params
{
	class UParticleSystem*                             EmitterTemplate;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  InTransform;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function WindManager.WindManager_C.OnWorldReady
struct AWindManager_C_OnWorldReady_Params
{
};

// Function WindManager.WindManager_C.ReceiveTick
struct AWindManager_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WindManager.WindManager_C.Register player for render to texture purposes
struct AWindManager_C_Register_player_for_render_to_texture_purposes_Params
{
	class APlayerPawn_Generic_C*                       Player_Pawn_Generic;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WindManager.WindManager_C.ExecuteUbergraph_WindManager
struct AWindManager_C_ExecuteUbergraph_WindManager_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
