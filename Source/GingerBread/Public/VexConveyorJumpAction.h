#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "VexConveyorAction.h"
#include "VexConveyorJumpAction.generated.h"

class UCameraShake;

UCLASS(Blueprintable)
class UVexConveyorJumpAction : public UVexConveyorAction {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCameraShake> CameraShake;
    
public:
    UVexConveyorJumpAction();

    UFUNCTION(BlueprintCallable)
    void RunFromStart_Delayed0(float Duration);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnJumpLand();
    
};

