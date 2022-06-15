#pragma once

namespace Offsets
{
	//Replication
	uintptr_t CreateChannel = 0x22247F0;
	uintptr_t SetChannelActor = 0x20C3390;
	uintptr_t ReplicateActor = 0x20BEA90;
	uintptr_t CallPreReplication = 0x1EB94E0;
	uintptr_t TickFlush = 0x223DB40;
	uintptr_t SendClientAdjustment = 0x232BAD0;
	uintptr_t ActorChannelClose = 0x20A8450;
	uintptr_t IsNetRelevantFor = 0x1ECC700;
	uintptr_t NotifyActorDestroyed = 0x2232500;
	uintptr_t DestroyActor = 0x21C1C40;

	//Beacons
	uintptr_t InitHost = 0x391E000;
	uintptr_t WelcomePlayer = 0x24A8F70;
	uintptr_t SpawnPlayActor = 0x21D8700;
	uintptr_t WorldNotifyControlMessage = 0x249DE10;
	uintptr_t BeaconNotifyControlMessage = 0x3920F90;
	uintptr_t KickPatch = 0x6DDBD0;

	//Gameplay
	uintptr_t InternalTryActivateAbility = 0x3D51D30;
}