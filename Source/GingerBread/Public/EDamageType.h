#pragma once
#include "CoreMinimal.h"
#include "EDamageType.generated.h"

UENUM(BlueprintType)
enum class EDamageType : uint8 {
    Standard,
    Fire,
    Electricity,
    Kinetic,
    Explosive,
    Flatten,
    Stun,
    HealthPotion,
    Stomp,
    CraftCutter,
    Slap,
    Roll,
    SelfHarm,
    HeadStomp,
    Shockwave,
    Projectile,
    Laser,
    OutOfLevel,
    Plasma,
    Parry,
    Water,
    Sharp,
};

