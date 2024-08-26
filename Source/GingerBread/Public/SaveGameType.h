#pragma once
#include "CoreMinimal.h"
#include "SaveGameType.generated.h"

UENUM(BlueprintType)
enum class SaveGameType : uint8 {
    MainSave,
    ImageSet,
    UserSettings,
    GlobalSettings,
};

