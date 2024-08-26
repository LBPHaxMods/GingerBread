#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/SceneComponent.h"
#include "PopshotBounceDebugComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPopshotBounceDebugComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPopshotBounceDebugComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetDebugEnabled(bool Enabled);
    
    UFUNCTION(BlueprintCallable)
    void CalculateBounceDebug(FVector StartLocation, float initialShotDist);
    
};

