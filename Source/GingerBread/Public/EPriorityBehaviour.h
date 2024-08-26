#pragma once
#include "CoreMinimal.h"
#include "EPriorityBehaviour.generated.h"

UENUM(BlueprintType)
namespace EPriorityBehaviour {
    enum Type {
        Default,
        AnyPlayerRequired,
        AllPlayersRequired,
    };
}

