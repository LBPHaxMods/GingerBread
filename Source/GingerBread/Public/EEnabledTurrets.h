#pragma once
#include "CoreMinimal.h"
#include "EEnabledTurrets.generated.h"

UENUM(BlueprintType)
enum class EEnabledTurrets : uint8 {
    eEnabled_Turrets_None,
    eEnabled_Turrets_0,
    eEnabled_Turrets_1,
    eEnabled_Turrets_01,
    eEnabled_Turrets_2,
    eEnabled_Turrets_02,
    eEnabled_Turrets_12,
    eEnabled_Turrets_012,
    eEnabled_Turrets_3,
    eEnabled_Turrets_03,
    eEnabled_Turrets_13,
    eEnabled_Turrets_013,
    eEnabled_Turrets_23,
    eEnabled_Turrets_023,
    eEnabled_Turrets_123,
    eEnabled_Turrets_0123,
    eEnabled_Turrets_Mask = eEnabled_Turrets_0123,
};

