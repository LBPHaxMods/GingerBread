#pragma once
#include "CoreMinimal.h"
#include "Engine/LocalPlayer.h"
#include "GingerbreadLocalPlayer.generated.h"

UCLASS(Blueprintable, NonTransient)
class GINGERBREAD_API UGingerbreadLocalPlayer : public ULocalPlayer {
    GENERATED_BODY()
public:
    UGingerbreadLocalPlayer();

private:
    UFUNCTION(BlueprintCallable)
    void TriggerCameraCut();
    
};

