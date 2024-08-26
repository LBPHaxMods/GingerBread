#pragma once
#include "CoreMinimal.h"
#include "EVexFinalSplatCSP.generated.h"

UENUM(BlueprintType)
enum class EVexFinalSplatCSP : uint8 {
    TriggerAttackMeshHands,
    TriggerAttackNoMeshHands,
    TriggerIndependentAttackMeshHands,
    TriggerIndependentAttackNoMeshHands,
    CancelAttack,
};

