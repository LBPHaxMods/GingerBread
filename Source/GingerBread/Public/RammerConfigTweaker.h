#pragma once
#include "CoreMinimal.h"
#include "AIBaseConfigTweaker.h"
#include "ERammerConfigVariant.h"
#include "RammerConfigTweaker.generated.h"

class URammerConfigChargeBase;
class URammerConfigFightBase;
class URammerConfigGenericBase;

UCLASS(Blueprintable)
class URammerConfigTweaker : public UAIBaseConfigTweaker {
    GENERATED_BODY()
public:
    URammerConfigTweaker();

    UFUNCTION(BlueprintCallable)
    static URammerConfigGenericBase* GetRammerGenericConfig(ERammerConfigVariant in_variant);
    
    UFUNCTION(BlueprintCallable)
    static URammerConfigFightBase* GetRammerFightConfig(ERammerConfigVariant in_variant);
    
    UFUNCTION(BlueprintCallable)
    static URammerConfigChargeBase* GetRammerChargeConfig(ERammerConfigVariant in_variant);
    
};

