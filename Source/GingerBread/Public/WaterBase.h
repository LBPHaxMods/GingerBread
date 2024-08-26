#pragma once

#include "CoreMinimal.h"
#include "PlayerCountActor.h"
#include "WaterBase.generated.h"

class UStaticMeshComponent;

UCLASS(Blueprintable)
class AWaterBase : public APlayerCountActor {
    GENERATED_BODY()
public:
    AWaterBase(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    UStaticMeshComponent* GetWaterPlaneCPP() const;
    
};

