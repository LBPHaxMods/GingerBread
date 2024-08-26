#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "ConfigSackboyPOI.generated.h"

class UTagContainer;

UCLASS(Blueprintable, DefaultConfig, MinimalAPI, Config=SackboyPOI)
class UConfigSackboyPOI : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath DataAssetAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTagContainer* DataAsset;
    
    UConfigSackboyPOI();

};

