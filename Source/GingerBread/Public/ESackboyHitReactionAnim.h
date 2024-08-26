#pragma once
#include "CoreMinimal.h"
#include "ESackboyHitReactionAnim.generated.h"

UENUM(BlueprintType)
enum class ESackboyHitReactionAnim : uint8 {
    Hit_Small,
    Hit_Medium,
    Hit_Large,
    RollDazed_OnGround,
    RollDazed_InAir,
    CreativeBurst,
    Flattened,
    CameraImpact,
    Dizzy,
    Drowning,
    HeroKnockback,
    Repulse,
    Hit_GloopMedium,
    Hit_SmallDeath,
    Repulse_Death,
    SlappedSackboy,
};

