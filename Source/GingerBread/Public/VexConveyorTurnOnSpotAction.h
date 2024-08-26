#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "VexConveyorAction.h"
#include "VexConveyorTurnOnSpotAction.generated.h"

class UCameraShake;

UCLASS(Blueprintable)
class UVexConveyorTurnOnSpotAction : public UVexConveyorAction {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCameraShake> CameraShake;
    
public:
    UVexConveyorTurnOnSpotAction();

private:
    UFUNCTION(BlueprintCallable)
    void StartFlameJets();
    
    UFUNCTION(BlueprintCallable)
    void ReachedFullSpeed();
    
    UFUNCTION(BlueprintCallable)
    void BeginSlowdown();
    
};

