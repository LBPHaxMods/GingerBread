#pragma once
#include "CoreMinimal.h"
#include "EVoidSelectVOType.generated.h"

UENUM(BlueprintType)
enum class EVoidSelectVOType : uint8 {
    Idle,
    Intro,
    NewLevel,
    MultipleNewLevels,
    BronzeAchieved,
    SilverAchieved,
    GoldAchieved,
    LevelFailure,
    LevelFailureRepeats,
    AllLevelsExceptFinal,
    MegaVoidHint,
    NotPlayedRecently,
    MegaVoidUnlocked,
    AllGolds,
    COUNT,
};

