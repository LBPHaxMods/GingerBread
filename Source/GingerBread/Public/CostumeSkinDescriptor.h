#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ESackboyMaterialSlot.h"
#include "CostumeSkinDescriptor.generated.h"

class UMaterialInstance;

UCLASS(Blueprintable)
class UCostumeSkinDescriptor : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESackboyMaterialSlot, UMaterialInstance*> MaterialOverrides;
    
    UCostumeSkinDescriptor();

};

