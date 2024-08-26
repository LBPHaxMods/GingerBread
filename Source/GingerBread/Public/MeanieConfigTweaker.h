#pragma once
#include "CoreMinimal.h"
#include "AIBaseConfigTweaker.h"
#include "EMeanieConfigVariant.h"
#include "MeanieConfigTweaker.generated.h"

class UMeanieConfigCleaveBase;
class UMeanieConfigFightBase;
class UMeanieConfigGenericBase;

UCLASS(Blueprintable)
class UMeanieConfigTweaker : public UAIBaseConfigTweaker {
    GENERATED_BODY()
public:
    UMeanieConfigTweaker();

    UFUNCTION(BlueprintCallable)
    static UMeanieConfigGenericBase* GetMeanieGenericConfig(EMeanieConfigVariant in_variant);
    
    UFUNCTION(BlueprintCallable)
    static UMeanieConfigFightBase* GetMeanieFightConfig(EMeanieConfigVariant in_variant);
    
    UFUNCTION(BlueprintCallable)
    static UMeanieConfigCleaveBase* GetMeanieCleaveConfig(EMeanieConfigVariant in_variant);
    
};

