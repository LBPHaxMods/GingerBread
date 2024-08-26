#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UObject/NoExportTypes.h"
#include "EHitPointModifyAttemptOverride.h"
#include "HitPointModifyAttempt.h"
#include "HitPointModifyResult.h"
#include "HitPointsModifierComponentEventReceiver.generated.h"

UINTERFACE(Blueprintable)
class UHitPointsModifierComponentEventReceiver : public UInterface {
    GENERATED_BODY()
};

class IHitPointsModifierComponentEventReceiver : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool OverrideHitPointsModifierContactData(const FHitPointModifyAttempt& Attempt, FVector& contactPositionOut, FVector& contactNormalOut);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    EHitPointModifyAttemptOverride OverrideHitPointsAttemptOnSource(const FHitPointModifyAttempt& Attempt, int32 modificationAmount, int32& overrideModificationAmount);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnHitPointsModifierPreModificationAttempt(const FHitPointModifyAttempt& Attempt);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnHitPointsModifierPostModificationAttempt(const FHitPointModifyResult& Result);
    
};

