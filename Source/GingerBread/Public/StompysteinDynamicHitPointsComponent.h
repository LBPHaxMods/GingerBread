#pragma once
#include "CoreMinimal.h"
#include "DynamicHitPointsComponent.h"
#include "StompysteinDynamicHitPointsComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UStompysteinDynamicHitPointsComponent : public UDynamicHitPointsComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsInvulnerable, meta=(AllowPrivateAccess=true))
    bool Rep_IsInvulnerable;
    
public:
    UStompysteinDynamicHitPointsComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void OnRep_IsInvulnerable();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnFightStarted(int32 SackboyNum);
    
    UFUNCTION(BlueprintCallable)
    bool HasPassedThreshold();
    
};

