#pragma once
#include "CoreMinimal.h"
#include "ComponentSelector.generated.h"

class AActor;
class USceneComponent;

USTRUCT(BlueprintType)
struct FComponentSelector {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> PickActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ComponentName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<USceneComponent> component;
    
    GINGERBREAD_API FComponentSelector();
};

