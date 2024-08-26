#pragma once
#include "CoreMinimal.h"
#include "AIBaseConfigTweaker.h"
#include "ESniperConfigVariant.h"
#include "SniperConfigTweaker.generated.h"

class USniperConfigFightBase;
class USniperConfigGenericBase;
class USniperConfigJumpSpace;
class USniperConfigShootBase;

UCLASS(Blueprintable)
class USniperConfigTweaker : public UAIBaseConfigTweaker {
    GENERATED_BODY()
public:
    USniperConfigTweaker();

    UFUNCTION(BlueprintCallable)
    static USniperConfigShootBase* GetSniperShootConfig(ESniperConfigVariant in_variant);
    
    UFUNCTION(BlueprintCallable)
    static USniperConfigJumpSpace* GetSniperJumpConfig(ESniperConfigVariant in_variant);
    
    UFUNCTION(BlueprintCallable)
    static USniperConfigGenericBase* GetSniperGenericConfig(ESniperConfigVariant in_variant);
    
    UFUNCTION(BlueprintCallable)
    static USniperConfigFightBase* GetSniperFightConfig(ESniperConfigVariant in_variant);
    
};

