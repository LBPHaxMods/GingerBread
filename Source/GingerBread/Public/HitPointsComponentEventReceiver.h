#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "EHitPointModifyAttemptOverride.h"
#include "HitPointModifyAttempt.h"
#include "HitPointModifyResult.h"
#include "HitPointPriorityFilterData.h"
#include "HitPointsComponentEventReceiver.generated.h"

UINTERFACE(Blueprintable)
class UHitPointsComponentEventReceiver : public UInterface {
    GENERATED_BODY()
};

class IHitPointsComponentEventReceiver : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    EHitPointModifyAttemptOverride OverrideHitPointsAttempt(const FHitPointModifyAttempt& Attempt, int32 modificationAmount, int32& overrideModificationAmount);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnHitPointsPreModificationAttempt(const FHitPointModifyAttempt& Attempt);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnHitPointsPostModificationAttempt(const FHitPointModifyResult& Result, const FName& reactionName);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool GetAdditionalPriorityFilterCheck(const FHitPointModifyAttempt& Attempt, FHitPointPriorityFilterData& additionalFilterData);
    
};

