#pragma once
#include "CoreMinimal.h"
#include "AIBaseConfigTweaker.h"
#include "EKingFroogleConfigVariant.h"
#include "KingFroogleConfigTweaker.generated.h"

class UKingFroogleConfigFightBase;
class UKingFroogleConfigGenericBase;
class UKingFroogleConfigStompBase;
class UKingFroogleConfigSuperAttackBase;

UCLASS(Blueprintable)
class UKingFroogleConfigTweaker : public UAIBaseConfigTweaker {
    GENERATED_BODY()
public:
    UKingFroogleConfigTweaker();

    UFUNCTION(BlueprintCallable)
    static UKingFroogleConfigSuperAttackBase* GetKingFroogleSuperAttackConfig(EKingFroogleConfigVariant in_variant);
    
    UFUNCTION(BlueprintCallable)
    static UKingFroogleConfigStompBase* GetKingFroogleStompConfig(EKingFroogleConfigVariant in_variant);
    
    UFUNCTION(BlueprintCallable)
    static UKingFroogleConfigGenericBase* GetKingFroogleGenericConfig(EKingFroogleConfigVariant in_variant);
    
    UFUNCTION(BlueprintCallable)
    static UKingFroogleConfigFightBase* GetKingFroogleFightConfig(EKingFroogleConfigVariant in_variant);
    
};

