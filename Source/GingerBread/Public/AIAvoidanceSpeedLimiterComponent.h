#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/EngineTypes.h"
#include "AIAvoidanceSpeedLimiterComponent.generated.h"

class AActor;
class UInteractionComponent;
class UPrimitiveComponent;
class USphereComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UAIAvoidanceSpeedLimiterComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UAIAvoidanceSpeedLimiterComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UnregisterCollider();
    
    UFUNCTION(BlueprintCallable)
    void SetInterpSpeed(float NewSpeed);
    
    UFUNCTION(BlueprintCallable)
    void SetDeltaLimit(float newDelta);
    
    UFUNCTION(BlueprintCallable)
    void RegisterInteractionCollider(UInteractionComponent* colliderToRegister);
    
    UFUNCTION(BlueprintCallable)
    void RegisterCollider(USphereComponent* colliderToRegister);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnOverlapBegin(UPrimitiveComponent* targetPrim, AActor* SourceActor, UPrimitiveComponent* sourcePrim, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION(BlueprintCallable)
    void OnInteractEnd(UInteractionComponent* OverlappedComp, AActor* OtherActor, UInteractionComponent* OtherComp);
    
    UFUNCTION(BlueprintCallable)
    void OnInteractBegin(UInteractionComponent* targetPrim, AActor* SourceActor, UInteractionComponent* sourcePrim);
    
};

