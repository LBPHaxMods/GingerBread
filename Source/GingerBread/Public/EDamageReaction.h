#pragma once
#include "CoreMinimal.h"
#include "EDamageReaction.generated.h"

UENUM(BlueprintType)
enum class EDamageReaction : uint8 {
    Normal,
    UserBlocked,
};

