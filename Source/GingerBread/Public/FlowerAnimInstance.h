#pragma once
#include "CoreMinimal.h"
#include "LevelObjectAnimInstance.h"
#include "SpawnPrizeDelegateDelegate.h"
#include "FlowerAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class UFlowerAnimInstance : public ULevelObjectAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpawnPrizeDelegate OnSpawnPrize;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bGrowPlant;
    
public:
    UFlowerAnimInstance();

};

