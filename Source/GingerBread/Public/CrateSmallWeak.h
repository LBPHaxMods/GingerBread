#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "CrateSmall.h"
#include "CrateSmallWeak.generated.h"

class AActor;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class ACrateSmallWeak : public ACrateSmall {
    GENERATED_BODY()
public:
    ACrateSmallWeak(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnComponentHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit);
    
};

