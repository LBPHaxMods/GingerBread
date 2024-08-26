#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "JointFactory.generated.h"

class UPhysicsConstraintComponent;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class GINGERBREAD_API AJointFactory : public AActor {
    GENERATED_BODY()
public:
    AJointFactory(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    static void SetConstraintMaxDistance(UPhysicsConstraintComponent* Constraint, float MaxDistance);
    
    UFUNCTION(BlueprintCallable)
    static UPhysicsConstraintComponent* CreatePhysicsConstraint(UPrimitiveComponent* PrimA, UPrimitiveComponent* PrimB, const FVector& WorldPos, const FRotator& WorldOrientation);
    
    UFUNCTION(BlueprintCallable)
    static UPhysicsConstraintComponent* CreateDistanceConstraint(UPrimitiveComponent* PrimA, UPrimitiveComponent* PrimB, const FVector& WorldPosA, const FVector& WorldPosB, float MaxDistance, float DriveStrength, bool DisableCollision);
    
};

