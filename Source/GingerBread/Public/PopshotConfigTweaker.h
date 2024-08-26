#pragma once
#include "CoreMinimal.h"
#include "AIBaseConfigTweaker.h"
#include "EPopshotConfigVariant.h"
#include "PopshotConfigTweaker.generated.h"

class UPopshotConfigFightBase;
class UPopshotConfigGenericBase;
class UPopshotConfigShootBase;

UCLASS(Blueprintable)
class UPopshotConfigTweaker : public UAIBaseConfigTweaker {
    GENERATED_BODY()
public:
    UPopshotConfigTweaker();

    UFUNCTION(BlueprintCallable)
    static UPopshotConfigShootBase* GetPopshotShootConfig(EPopshotConfigVariant in_variant);
    
    UFUNCTION(BlueprintCallable)
    static UPopshotConfigGenericBase* GetPopshotGenericConfig(EPopshotConfigVariant in_variant);
    
    UFUNCTION(BlueprintCallable)
    static UPopshotConfigFightBase* GetPopshotFightConfig(EPopshotConfigVariant in_variant);
    
};

