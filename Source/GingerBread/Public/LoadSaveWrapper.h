#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "LoadSaveData.h"
#include "SettingsLoadSaveData.h"
#include "LoadSaveWrapper.generated.h"

UCLASS(Blueprintable)
class ULoadSaveWrapper : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLoadSaveData Data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSettingsLoadSaveData Settings;
    
    ULoadSaveWrapper();

};

