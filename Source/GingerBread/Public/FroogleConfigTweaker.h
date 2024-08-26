#pragma once
#include "CoreMinimal.h"
#include "AIBaseConfigTweaker.h"
#include "EFroogleConfigVariant.h"
#include "FroogleConfigTweaker.generated.h"

class UFroogleConfigFightBase;
class UFroogleConfigGenericBase;
class UFroogleConfigHopBase;
class UFroogleConfigSuperAttackBase;

UCLASS(Blueprintable)
class UFroogleConfigTweaker : public UAIBaseConfigTweaker {
    GENERATED_BODY()
public:
    UFroogleConfigTweaker();

    UFUNCTION(BlueprintCallable)
    static UFroogleConfigSuperAttackBase* GetFroogleSuperAttackConfig(EFroogleConfigVariant in_variant);
    
    UFUNCTION(BlueprintCallable)
    static UFroogleConfigHopBase* GetFroogleHopConfig(EFroogleConfigVariant in_variant);
    
    UFUNCTION(BlueprintCallable)
    static UFroogleConfigGenericBase* GetFroogleGenericConfig(EFroogleConfigVariant in_variant);
    
    UFUNCTION(BlueprintCallable)
    static UFroogleConfigFightBase* GetFroogleFightConfig(EFroogleConfigVariant in_variant);
    
};

