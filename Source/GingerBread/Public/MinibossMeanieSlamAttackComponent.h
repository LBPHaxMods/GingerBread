#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "MinibossMeanieSlamAttackComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UMinibossMeanieSlamAttackComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SlamAttackPlayRate, meta=(AllowPrivateAccess=true))
    float Rep_SlamAttackPlayRate;
    
public:
    UMinibossMeanieSlamAttackComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void OnRep_SlamAttackPlayRate();
    
};

