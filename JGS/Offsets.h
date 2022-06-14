#pragma once

namespace Offsets
{
	//Replication
	uintptr_t CreateChannel = 0x22998B0;
	uintptr_t SetChannelActor = 0x2136250;
	uintptr_t ReplicateActor = 0x2131930;
	uintptr_t CallPreReplication = 0x1F2D180;
	uintptr_t TickFlush = 0x22B2F50;
	uintptr_t SendClientAdjustment = 0x23A4320;
	uintptr_t ActorChannelClose = 0x211B4F0;
	uintptr_t IsNetRelevantFor = 0x1F40630;
	uintptr_t NotifyActorDestroyed = 0x22A76D0;

	//Beacons
	uintptr_t InitHost = 0x3A00590;
	uintptr_t WelcomePlayer = 0x25260C0;
	uintptr_t SpawnPlayActor = 0x224CD40;
	uintptr_t WorldNotifyControlMessage = 0x251ADA0;
	uintptr_t BeaconNotifyControlMessage = 0x3A03500;
	uintptr_t KickPatch = 0x6E21E0;

	//Gameplay
	uintptr_t InternalTryActivateAbility = 0x3E3D720;
	uintptr_t OnReload = 0x9456B0;
	uintptr_t OnBuild = 0x83E100;
	uintptr_t OnRepair = 0x0;
}