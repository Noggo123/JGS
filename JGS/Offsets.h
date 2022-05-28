#pragma once

namespace Offsets
{
	//Replication
	uintptr_t CreateChannel = 0x1B0C510;
	uintptr_t SetChannelActor = 0x19AA960;
	uintptr_t ReplicateActor = 0x19A60D0;
	uintptr_t CallPreReplication = 0x17972E0;
	uintptr_t TickFlush = 0x1B1D1E0;
	uintptr_t SendClientAdjustment = 0x1C1D490;
	uintptr_t NotifyActorDestroyed = 0x1B15CF0;
	uintptr_t ActorChannelClose = 0x198D480;

	//Beacons
	uintptr_t InitHost = 0x27B4820;
	uintptr_t WelcomePlayer = 0x1DACC50;
	uintptr_t SpawnPlayActor = 0x1A9E7B0;
	uintptr_t WorldNotifyControlMessage = 0x1DA15C0;
	uintptr_t BeaconNotifyControlMessage = 0x27B7620;
	uintptr_t KickPatch = 0x71FF90;

	//Gameplay
	uintptr_t InternalTryActivateAbility = 0x29B9D50;
}