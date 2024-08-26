#pragma once
#include "CoreMinimal.h"
#include "CameraBehaviour.h"
#include "FreeLookCameraBehaviour.generated.h"

class AGingerbreadPlayerController;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GINGERBREAD_API UFreeLookCameraBehaviour : public UCameraBehaviour {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PanSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RotationSpeed;
    
    UFreeLookCameraBehaviour(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetBehaviourActive(bool Activate, AGingerbreadPlayerController* player_controller);
    
    UFUNCTION(BlueprintCallable)
    bool IsBehaviourActive();
    
};

