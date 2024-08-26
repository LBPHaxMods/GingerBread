#pragma once
#include "CoreMinimal.h"
#include "ENaomiSpeechType.generated.h"

UENUM(BlueprintType)
enum class ENaomiSpeechType : uint8 {
    Invalid,
    FightStart,
    EnterAdminMode,
    ExitAdminMode,
    HitReaction,
    FourthWall,
    SackboyDeath,
};

