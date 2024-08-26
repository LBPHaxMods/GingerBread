#pragma once
#include "CoreMinimal.h"
#include "EZomZomShopVOType.generated.h"

UENUM(BlueprintType)
enum class EZomZomShopVOType : uint8 {
    Idle,
    Purchase,
    SurpriseMe,
    Spins,
    Paints,
    BuyEmote,
    EquipEmote,
    NoCollectabells,
    SumoSuit,
    WardrobeFull,
    WelcomeWorld1,
    WelcomeWorld2,
    WelcomeWorld3,
    WelcomeWorld4,
    WelcomeWorld5,
    WelcomeGeneric,
    ExitGeneric,
    Equip,
    EquipOutfit,
    COUNT,
};

