#pragma once

namespace Offsets
{
	//Replication
	uintptr_t CreateChannel = 0x2337870;
	uintptr_t SetChannelActor = 0x21C6570;
	uintptr_t ReplicateActor = 0x21C1B10;
	uintptr_t CallPreReplication = 0x1FA7990;
	uintptr_t TickFlush = 0x234D700;
	uintptr_t SendClientAdjustment = 0x2459F90;

	//Beacons
	uintptr_t WelcomePlayer = 0x25FEFE0;
	uintptr_t SpawnPlayActor = 0x22DE6F0;
	uintptr_t WorldNotifyControlMessage = 0x25F3750;
	uintptr_t BeaconNotifyControlMessage = 0x35BA30;
	uintptr_t KickPatch = 0xDEAC60;
}