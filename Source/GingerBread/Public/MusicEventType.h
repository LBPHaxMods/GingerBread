#pragma once

#include "CoreMinimal.h"
#include "MusicEventType.generated.h"

UENUM(BlueprintType)
enum class MusicEventType : uint8
{
	MusicSyncBeat                  = 0,
	MusicSyncBar                   = 1,
	MusicSyncEntry                 = 2,
	MusicSyncExit                  = 3,
	MusicSyncUserCue               = 4,
	MusicSyncMarker                = 5,
	MusicEventType_MAX             = 6,
};