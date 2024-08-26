#pragma once
#include "CoreMinimal.h"
#include "AIBaseConfigTweaker.h"
#include "EMinibossMeanieConfigVariant.h"
#include "MinibossMeanieConfigTweaker.generated.h"

class UMinibossMeanieConfigFightBase;
class UMinibossMeanieConfigGenericBase;
class UMinibossMeanieConfigPunchBase;
class UMinibossMeanieConfigSlamBase;

UCLASS(Blueprintable)
class UMinibossMeanieConfigTweaker : public UAIBaseConfigTweaker {
    GENERATED_BODY()
public:
    UMinibossMeanieConfigTweaker();

    UFUNCTION(BlueprintCallable)
    static UMinibossMeanieConfigSlamBase* GetMinibossMeanieSlamConfig(EMinibossMeanieConfigVariant in_variant);
    
    UFUNCTION(BlueprintCallable)
    static UMinibossMeanieConfigPunchBase* GetMinibossMeaniePunchConfig(EMinibossMeanieConfigVariant in_variant);
    
    UFUNCTION(BlueprintCallable)
    static UMinibossMeanieConfigGenericBase* GetMinibossMeanieGenericConfig(EMinibossMeanieConfigVariant in_variant);
    
    UFUNCTION(BlueprintCallable)
    static UMinibossMeanieConfigFightBase* GetMinibossMeanieFightConfig(EMinibossMeanieConfigVariant in_variant);
    
};

