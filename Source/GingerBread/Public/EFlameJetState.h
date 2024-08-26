#pragma once
#include "CoreMinimal.h"
#include "EFlameJetState.generated.h"

UENUM(BlueprintType)
namespace EFlameJetState {
    enum Type {
        Sleeping,
        WarmUp,
        Active,
        CoolDown,
        Inactive,
    };
}

