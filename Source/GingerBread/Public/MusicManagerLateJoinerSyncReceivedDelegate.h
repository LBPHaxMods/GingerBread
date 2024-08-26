#pragma once
#include "CoreMinimal.h"
#include "MusicManagerLateJoinerSyncReceivedDelegate.generated.h"

class AMusicManager;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FMusicManagerLateJoinerSyncReceived, AMusicManager*, MusicManager, FName, PendingSectionName);

