#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "AppearanceManagerReadyDelegate.h"
#include "AppearanceSlot.h"
#include "SackboyAppearanceManagerDataAsset.generated.h"

class UDataTable;
class UMaterialParameterCollection;

UCLASS(Blueprintable)
class USackboyAppearanceManagerDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAppearanceSlot> SlotAppearances;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialParameterCollection* PlayerColoursParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* ColourBlindProfiles;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAppearanceManagerReady OnAppearanceManagerReady;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AppearanceManagerIsReady;
    
    USackboyAppearanceManagerDataAsset();

};

