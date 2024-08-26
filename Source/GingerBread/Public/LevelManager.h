#pragma once
#include "CoreMinimal.h"
#include "GingerbreadManager.h"
#include "LevelManager.generated.h"

class ALevelManager;
class APhaseLight;
class UInteractionComponent;
class UObject;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class GINGERBREAD_API ALevelManager : public AGingerbreadManager {
    GENERATED_BODY()
public:
    ALevelManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool GetOverlappingPhaseLightsInteraction(UInteractionComponent* Interaction, TArray<APhaseLight*>& phaseLightsOut);
    
    UFUNCTION(BlueprintCallable)
    bool GetOverlappingPhaseLights(UPrimitiveComponent* Primitive, TArray<APhaseLight*>& phaseLightsOut);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static ALevelManager* GetInstance(const UObject* WorldContextObject);
    
};

