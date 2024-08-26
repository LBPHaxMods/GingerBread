#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EMeanieMovementType.h"
#include "MeanieMovementParams.h"
#include "MinibossMeanieMovementParamsComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UMinibossMeanieMovementParamsComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMeanieMovementType, FMeanieMovementParams> MovementParamsMap;
    
    UMinibossMeanieMovementParamsComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetMovementType(EMeanieMovementType State);
    
};

