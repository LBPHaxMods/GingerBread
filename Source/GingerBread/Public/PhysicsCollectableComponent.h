#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CollectableComponentBase.h"
#include "PhysicsCollectableComponent.generated.h"

class UGlueCollectableComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPhysicsCollectableComponent : public UCollectableComponentBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool StartsAwake;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CacheImpulses;
    
public:
    UPhysicsCollectableComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetLinearVelocity(const FVector& Velocity, bool AddToCurrent);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnGlueDetached(UGlueCollectableComponent* pGlueCollectableComponent);
    
public:
    UFUNCTION(BlueprintCallable)
    void ApplyImpulse(const FVector& Impulse);
    
    UFUNCTION(BlueprintCallable)
    void ApplyCachedImpulse();
    
    UFUNCTION(BlueprintCallable)
    void ApplyAngularImpulse(const FVector& ImpulseInRadians);
    
};

