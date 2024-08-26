#pragma once
#include "CoreMinimal.h"
#include "AIBaseConfigTweaker.h"
#include "EVexConfigVariant.h"
#include "VexConfigTweaker.generated.h"

class UVexConfigAttacksBase;
class UVexConfigConveyorBase;
class UVexConfigGenericBase;
class UVexConfigMovementBase;
class UVexConfigPhaseModifiersBase;

UCLASS(Blueprintable)
class UVexConfigTweaker : public UAIBaseConfigTweaker {
    GENERATED_BODY()
public:
    UVexConfigTweaker();

    UFUNCTION(BlueprintCallable)
    static UVexConfigPhaseModifiersBase* GetVexPhaseModifiersConfig(EVexConfigVariant in_variant);
    
    UFUNCTION(BlueprintCallable)
    static UVexConfigMovementBase* GetVexMovementConfig(EVexConfigVariant in_variant);
    
    UFUNCTION(BlueprintCallable)
    static UVexConfigGenericBase* GetVexGenericConfig(EVexConfigVariant in_variant);
    
    UFUNCTION(BlueprintCallable)
    static UVexConfigConveyorBase* GetVexConveyorConfig(EVexConfigVariant in_variant);
    
    UFUNCTION(BlueprintCallable)
    static UVexConfigAttacksBase* GetVexAttacksConfig(EVexConfigVariant in_variant);
    
};

