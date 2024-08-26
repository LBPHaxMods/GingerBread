#pragma once
#include "CoreMinimal.h"
#include "EPlayerReadyToJoinStatus.generated.h"

UENUM(BlueprintType)
enum class EPlayerReadyToJoinStatus : uint8 {
    ReadyToJoin,
    NotReadyToJoin,
};

