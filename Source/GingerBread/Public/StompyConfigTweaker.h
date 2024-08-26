#pragma once
#include "CoreMinimal.h"
#include "AIBaseConfigTweaker.h"
#include "EStompyConfigVariant.h"
#include "StompyConfigTweaker.generated.h"

class UStompyConfigFightBase;
class UStompyConfigGenericBase;
class UStompyConfigSpinBase;

UCLASS(Blueprintable)
class UStompyConfigTweaker : public UAIBaseConfigTweaker {
    GENERATED_BODY()
public:
    UStompyConfigTweaker();

    UFUNCTION(BlueprintCallable)
    static UStompyConfigSpinBase* GetStompySpinConfig(EStompyConfigVariant in_variant);
    
    UFUNCTION(BlueprintCallable)
    static UStompyConfigGenericBase* GetStompyGenericConfig(EStompyConfigVariant in_variant);
    
    UFUNCTION(BlueprintCallable)
    static UStompyConfigFightBase* GetStompyFightConfig(EStompyConfigVariant in_variant);
    
};

