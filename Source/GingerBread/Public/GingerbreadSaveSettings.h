#pragma once
#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "SettingsLoadSaveData.h"
#include "GingerbreadSaveSettings.generated.h"

UCLASS(Blueprintable)
class UGingerbreadSaveSettings : public USaveGame {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSettingsLoadSaveData Data;
    
    UGingerbreadSaveSettings();

};

