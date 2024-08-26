#pragma once
#include "CoreMinimal.h"
#include "VexConveyorFlamePanel.generated.h"

class UBoxComponent;
class UInteractionComponent;
class UMaterialInstanceDynamic;

USTRUCT(BlueprintType)
struct FVexConveyorFlamePanel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UBoxComponent> CollisionBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UInteractionComponent> InteractBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInstanceDynamic*> CachedDMIs;
    
    GINGERBREAD_API FVexConveyorFlamePanel();
};

