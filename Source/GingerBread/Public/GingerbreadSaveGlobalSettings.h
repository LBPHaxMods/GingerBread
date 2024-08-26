#pragma once
#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "SettingsGlobalData.h"
#include "GingerbreadSaveGlobalSettings.generated.h"

UCLASS(Blueprintable)
class UGingerbreadSaveGlobalSettings : public USaveGame {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSettingsGlobalData Data;
    
    UGingerbreadSaveGlobalSettings();

};

