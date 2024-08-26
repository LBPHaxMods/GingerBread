#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ESpotShadowState.h"
#include "SpotShadowManagerComponent.generated.h"

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USpotShadowManagerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HideShadowAfterShrink;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SpotShadowState, meta=(AllowPrivateAccess=true))
    ESpotShadowState SpotShadowState;
    
public:
    USpotShadowManagerComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void SnapAIToLocation(float X, float Y);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_SpotShadowState();
    
};

