#pragma once
#include "CoreMinimal.h"
#include "VexConveyorLegacyFlamePanel.generated.h"

class UMaterialInstanceDynamic;

USTRUCT(BlueprintType)
struct FVexConveyorLegacyFlamePanel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInstanceDynamic*> CachedDMIs;
    
    GINGERBREAD_API FVexConveyorLegacyFlamePanel();
};

