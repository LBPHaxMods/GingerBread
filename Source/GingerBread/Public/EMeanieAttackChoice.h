#pragma once
#include "CoreMinimal.h"
#include "EMeanieAttackChoice.generated.h"

UENUM(BlueprintType)
enum class EMeanieAttackChoice : uint8 {
    CleaveCombo,
    SpinAttack,
    EscalatedSpinAttack,
};

