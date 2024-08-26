#pragma once
#include "CoreMinimal.h"
#include "ECostumeItemCategory.generated.h"

UENUM(BlueprintType)
enum class ECostumeItemCategory : uint8 {
    ItemCategory_Head,
    ItemCategory_Hair,
    ItemCategory_Eyes,
    ItemCategory_Glasses,
    ItemCategory_Mouth,
    ItemCategory_Neck,
    ItemCategory_Torso,
    ItemCategory_Waist,
    ItemCategory_Hands,
    ItemCategory_Legs,
    ItemCategory_Feet,
    ItemCategory_Prop,
    ItemCategory_Skin,
    Count,
};

