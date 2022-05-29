#pragma once

// Fortnite (4.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function AthenaMatchmakingTile.AthenaMatchmakingTile_C.PlayIntroOrOutro
struct UAthenaMatchmakingTile_C_PlayIntroOrOutro_Params
{
	bool                                               PlayIntro;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaMatchmakingTile.AthenaMatchmakingTile_C.Construct
struct UAthenaMatchmakingTile_C_Construct_Params
{
};

// Function AthenaMatchmakingTile.AthenaMatchmakingTile_C.UpdateTileAvailability
struct UAthenaMatchmakingTile_C_UpdateTileAvailability_Params
{
	bool*                                              Available;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaMatchmakingTile.AthenaMatchmakingTile_C.OnSelected
struct UAthenaMatchmakingTile_C_OnSelected_Params
{
};

// Function AthenaMatchmakingTile.AthenaMatchmakingTile_C.OnDeselected
struct UAthenaMatchmakingTile_C_OnDeselected_Params
{
};

// Function AthenaMatchmakingTile.AthenaMatchmakingTile_C.SetTileSize
struct UAthenaMatchmakingTile_C_SetTileSize_Params
{
	bool*                                              UseLargeSize;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaMatchmakingTile.AthenaMatchmakingTile_C.PlaylistChanged
struct UAthenaMatchmakingTile_C_PlaylistChanged_Params
{
	class UFortPlaylistAthena**                        PlaylistToRepresent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaMatchmakingTile.AthenaMatchmakingTile_C.TilePlaylistSetAsMatchmakingPlaylist
struct UAthenaMatchmakingTile_C_TilePlaylistSetAsMatchmakingPlaylist_Params
{
};

// Function AthenaMatchmakingTile.AthenaMatchmakingTile_C.OnImageLoadingComplete
struct UAthenaMatchmakingTile_C_OnImageLoadingComplete_Params
{
};

// Function AthenaMatchmakingTile.AthenaMatchmakingTile_C.OnHovered
struct UAthenaMatchmakingTile_C_OnHovered_Params
{
};

// Function AthenaMatchmakingTile.AthenaMatchmakingTile_C.SetDefaultImage
struct UAthenaMatchmakingTile_C_SetDefaultImage_Params
{
};

// Function AthenaMatchmakingTile.AthenaMatchmakingTile_C.OnClicked
struct UAthenaMatchmakingTile_C_OnClicked_Params
{
};

// Function AthenaMatchmakingTile.AthenaMatchmakingTile_C.ExecuteUbergraph_AthenaMatchmakingTile
struct UAthenaMatchmakingTile_C_ExecuteUbergraph_AthenaMatchmakingTile_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
