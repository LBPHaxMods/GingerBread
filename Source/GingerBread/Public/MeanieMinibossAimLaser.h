#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "MeanieMinibossAimLaser.generated.h"

UCLASS(Blueprintable)
class AMeanieMinibossAimLaser : public AActor {
    GENERATED_BODY()
public:
    AMeanieMinibossAimLaser(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetLaserWidth(float Width);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetLaserLength(float Length);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetLaserDirection(const FVector& Direction);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetLaserColour(FLinearColor Colour);
    
};

