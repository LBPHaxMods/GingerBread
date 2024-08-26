#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "Engine/EngineTypes.h"
#include "EVexFinalLifeState.h"
#include "VexFinalLifeAimInfo.h"
#include "VexFinalLifeDespawningComponentSimpleDelegateDelegate.h"
#include "VexFinalLifeDespawningComponent.generated.h"

class AActor;
class ACollectableBase;
class ASackboy;
class UPrimitiveComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UVexFinalLifeDespawningComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InitialFlashingPlayRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxFlashingPlayRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayRateIncreasePerFlash;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FlashDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxFlashes;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVexFinalLifeDespawningComponentSimpleDelegate OnLifeDespawned;
    
private:
    UPROPERTY(EditAnywhere, ReplicatedUsing=OnRep_LifeState, meta=(AllowPrivateAccess=true))
    EVexFinalLifeState LifeState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_AimInfo, meta=(AllowPrivateAccess=true))
    FVexFinalLifeAimInfo AimInfo;
    
public:
    UVexFinalLifeDespawningComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void OnRep_LifeState();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_AimInfo();
    
    UFUNCTION(BlueprintCallable)
    void OnLifeCollected(ACollectableBase* Collectable, ASackboy* CollectingSackboy);
    
    UFUNCTION(BlueprintCallable)
    void OnActorHit(AActor* SelfActor, UPrimitiveComponent* SelfComponent, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit);
    
};

