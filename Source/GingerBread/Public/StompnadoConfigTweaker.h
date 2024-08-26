#pragma once
#include "CoreMinimal.h"
#include "AIBaseConfigTweaker.h"
#include "EStompnadoConfigVariant.h"
#include "StompnadoConfigTweaker.generated.h"

class UStompnadoConfigFightBase;
class UStompnadoConfigGenericBase;
class UStompnadoConfigSpinBase;

UCLASS(Blueprintable)
class UStompnadoConfigTweaker : public UAIBaseConfigTweaker {
    GENERATED_BODY()
public:
    UStompnadoConfigTweaker();

    UFUNCTION(BlueprintCallable)
    static UStompnadoConfigSpinBase* GetStompnadoSpinConfig(EStompnadoConfigVariant in_variant);
    
    UFUNCTION(BlueprintCallable)
    static UStompnadoConfigGenericBase* GetStompnadoGenericConfig(EStompnadoConfigVariant in_variant);
    
    UFUNCTION(BlueprintCallable)
    static UStompnadoConfigFightBase* GetStompnadoFightConfig(EStompnadoConfigVariant in_variant);
    
};

