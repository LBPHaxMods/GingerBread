#pragma once
#include "CoreMinimal.h"
#include "ESackboyHitReaction.generated.h"

UENUM(BlueprintType)
enum class ESackboyHitReaction : uint8 {
    None,
    Hit_Small,
    Hit_Medium,
    Hit_Large,
    RollDazed_OnGround,
    RollDazed_InAir,
    RollRiderDazed,
    Flattened,
    FlattenedLight,
    CameraSplat,
    Daze,
    DeathPlane,
    Drowned,
    Repulse,
    HeroKnockback,
    Hit_GloopMedium,
    RepulseHigh,
    RepulseDeath,
    SlappedSackboy,
    Limit,
};

