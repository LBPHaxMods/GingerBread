#pragma once
#include "CoreMinimal.h"
#include "EDamageDetails.generated.h"

UENUM(BlueprintType)
enum class EDamageDetails : uint8 {
    Normal,
    LowAttack,
    FeatherStomp,
    BlastersRollStomp,
    BlastersRollStompAOE,
    DevotedLimpSlap,
    GlassCannonSlap,
    TissueIssueAttack,
    HeadBangerStomp,
    VolatileRoll,
    RepulseAttack,
};

