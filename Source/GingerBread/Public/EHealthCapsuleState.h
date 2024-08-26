#pragma once
#include "CoreMinimal.h"
#include "EHealthCapsuleState.generated.h"

UENUM()
enum class EHealthCapsuleState : int32 {
    Idle,
    BeingCollected,
    CollectionConfirmed,
    Collected,
};

