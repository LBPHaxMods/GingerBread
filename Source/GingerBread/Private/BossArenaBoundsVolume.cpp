#include "BossArenaBoundsVolume.h"
#include "BossArenaBoundsDebugComponent.h"

ABossArenaBoundsVolume::ABossArenaBoundsVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DebugEnabled = false;
    this->DebugZOffset = 0.00f;
    this->DebugComponent = CreateDefaultSubobject<UBossArenaBoundsDebugComponent>(TEXT("DebugComponent"));
}

FVector ABossArenaBoundsVolume::GetClosestPointInVolume(bool& outWasInVolume, bool& outWasInTriangle, const FVector Point) {
    return FVector{};
}


