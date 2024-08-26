#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MovementExtender.h"
#include "PlanarFlyingMovementExtender.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPlanarFlyingMovementExtender : public UMovementExtender {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector PreferedUpVector;
    
    UPlanarFlyingMovementExtender(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void PhysicsRotation(float DeltaTime);
    
};

