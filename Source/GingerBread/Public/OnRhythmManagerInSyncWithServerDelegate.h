#pragma once
#include "CoreMinimal.h"
#include "OnRhythmManagerInSyncWithServerDelegate.generated.h"

class ARhythmManager;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnRhythmManagerInSyncWithServer, ARhythmManager*, RhythmManager, FName, PendingSectionName);

