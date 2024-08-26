#pragma once
#include "CoreMinimal.h"
#include "AIBaseConfigTweaker.h"
#include "EShieldConfigVariant.h"
#include "ShieldConfigTweaker.generated.h"

class UShieldConfigFightBase;
class UShieldConfigGenericBase;
class UShieldConfigShieldBase;

UCLASS(Blueprintable)
class UShieldConfigTweaker : public UAIBaseConfigTweaker {
    GENERATED_BODY()
public:
    UShieldConfigTweaker();

    UFUNCTION(BlueprintCallable)
    static UShieldConfigShieldBase* GetShieldShieldConfig(EShieldConfigVariant in_variant);
    
    UFUNCTION(BlueprintCallable)
    static UShieldConfigGenericBase* GetShieldGenericConfig(EShieldConfigVariant in_variant);
    
    UFUNCTION(BlueprintCallable)
    static UShieldConfigFightBase* GetShieldFightConfig(EShieldConfigVariant in_variant);
    
};

