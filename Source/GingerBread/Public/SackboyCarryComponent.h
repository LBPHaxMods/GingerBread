#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "CarryEventDelegate.h"
#include "SackboyCarryComponent.generated.h"

class ASackboy;
class UPrimitiveComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USackboyCarryComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCarryEvent OnStartCarryingObjectEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCarryEvent OnStopCarryingObjectEvent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxCollisionDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxVelocityOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RotationBlendRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ResolveAlongLocalHorizontalAxes;
    
public:
    USackboyCarryComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StopCarryingObject();
    
    UFUNCTION(BlueprintCallable)
    void StartCarryingObject(UPrimitiveComponent* Primitive);
    
    UFUNCTION(BlueprintCallable)
    void SetSackboy(ASackboy* Sackboy);
    
    UFUNCTION(BlueprintCallable)
    void SetCarryingPrimitive(UPrimitiveComponent* Primitive);
    
    UFUNCTION(BlueprintCallable)
    bool IsCarryingObject();
    
    UFUNCTION(BlueprintCallable)
    UPrimitiveComponent* GetCarriedObject();
    
};

