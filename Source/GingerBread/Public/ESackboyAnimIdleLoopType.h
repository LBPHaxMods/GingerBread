#pragma once
#include "CoreMinimal.h"
#include "ESackboyAnimIdleLoopType.generated.h"

UENUM(BlueprintType)
enum class ESackboyAnimIdleLoopType : uint8 {
    IdleLoop,
    CarryingIdle,
    BalanceIdle,
    SmallHappyIdleLoop,
    HappyIdleLoop,
    BigHappyIdleLoop,
    SmallSadIdleLoop,
    SadIdleLoop,
    BigSadIdleLoop,
    SmallAngryIdleLoop,
    AngryIdleLoop,
    BigAngryIdleLoop,
    SmallScaredIdleLoop,
    ScaredIdleLoop,
    BigScaredIdleLoop,
    OnWorldMapIdleLoop,
    AlongTightropeLeftFoot,
    AlongTightropeRightFoot,
    AcrossTightrope,
    BlastersIdleLoop,
};

