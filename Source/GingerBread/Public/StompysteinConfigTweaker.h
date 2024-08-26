#pragma once
#include "CoreMinimal.h"
#include "AIBaseConfigTweaker.h"
#include "EStompysteinConfigVariant.h"
#include "StompysteinConfigTweaker.generated.h"

class UStompysteinConfigFightBase;
class UStompysteinConfigGenericBase;
class UStompysteinConfigLinkBase;
class UStompysteinConfigSpinBase;

UCLASS(Blueprintable)
class UStompysteinConfigTweaker : public UAIBaseConfigTweaker {
    GENERATED_BODY()
public:
    UStompysteinConfigTweaker();

    UFUNCTION(BlueprintCallable)
    static UStompysteinConfigSpinBase* GetStompysteinSpinConfig(EStompysteinConfigVariant in_variant);
    
    UFUNCTION(BlueprintCallable)
    static UStompysteinConfigLinkBase* GetStompysteinLinkConfig(EStompysteinConfigVariant in_variant);
    
    UFUNCTION(BlueprintCallable)
    static UStompysteinConfigGenericBase* GetStompysteinGenericConfig(EStompysteinConfigVariant in_variant);
    
    UFUNCTION(BlueprintCallable)
    static UStompysteinConfigFightBase* GetStompysteinFightConfig(EStompysteinConfigVariant in_variant);
    
};

