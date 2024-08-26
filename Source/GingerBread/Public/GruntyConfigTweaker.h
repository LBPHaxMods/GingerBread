#pragma once
#include "CoreMinimal.h"
#include "AIBaseConfigTweaker.h"
#include "EGruntyConfigVariant.h"
#include "GruntyConfigTweaker.generated.h"

class UGruntyConfigAttackBase;
class UGruntyConfigFightBase;
class UGruntyConfigGenericBase;
class UGruntyConfigStackBase;

UCLASS(Blueprintable)
class UGruntyConfigTweaker : public UAIBaseConfigTweaker {
    GENERATED_BODY()
public:
    UGruntyConfigTweaker();

    UFUNCTION(BlueprintCallable)
    static UGruntyConfigStackBase* GetGruntyStackConfig(EGruntyConfigVariant in_variant);
    
    UFUNCTION(BlueprintCallable)
    static UGruntyConfigGenericBase* GetGruntyGenericConfig(EGruntyConfigVariant in_variant);
    
    UFUNCTION(BlueprintCallable)
    static UGruntyConfigFightBase* GetGruntyFightConfig(EGruntyConfigVariant in_variant);
    
    UFUNCTION(BlueprintCallable)
    static UGruntyConfigAttackBase* GetGruntyAttackConfig(EGruntyConfigVariant in_variant);
    
};

