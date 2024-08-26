#pragma once
#include "CoreMinimal.h"
#include "ESackboyLayeredAnimState.generated.h"

UENUM(BlueprintType)
enum class ESackboyLayeredAnimState : uint8 {
    NoAnim,
    PrepareToCatchCraftCutter,
    CatchCraftCutter,
    StowCraftCutter,
    DizzyReaction,
    UpperBodyThrowItem,
    UpperBodyDropToy,
    UpperBodyHitReaction,
    UpperBodyFireBlasters,
    UpperBodyReadyToSlap,
    UpperBodyAnimSequence,
    UpperBodyEmote,
    NumStates,
};

