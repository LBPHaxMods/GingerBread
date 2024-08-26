#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CollectabellReward.generated.h"

UCLASS(Blueprintable)
class ACollectabellReward : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FollowLerpValue;
    
public:
    ACollectabellReward(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAmount() const;
    
};

