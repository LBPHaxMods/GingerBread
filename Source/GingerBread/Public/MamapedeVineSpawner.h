#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "EMamapedeVineSpawningSource.h"
#include "MamapedeVineSpawner.generated.h"

class ABossArenaBoundsVolume;
class AMamapede;
class ASpikeyVineSingleStandaloneMamapede;
class UActorPoolComponent;
class UParticleSystem;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UMamapedeVineSpawner : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector LocalOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistanceBetweenDrops;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinimumDistanceBetweenDrops;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ArenaZHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool PlaceInArenaVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* BurrowVFX;
    
public:
    UMamapedeVineSpawner(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void VineVisibilityAltered(ASpikeyVineSingleStandaloneMamapede* SpikeyVine, bool NewVisibility);
    
    UFUNCTION(BlueprintCallable)
    void VineFullyDown(ASpikeyVineSingleStandaloneMamapede* SpikeyVine);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetVinePool(UActorPoolComponent* PoolComponent);
    
    UFUNCTION(BlueprintCallable)
    void SetSpawningActor(AMamapede* TargetActor);
    
    UFUNCTION(BlueprintCallable)
    void SetArenaBoundsVolume(ABossArenaBoundsVolume* ArenaBoundsVolumeIn);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBurrowActive() const;
    
private:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void DoBurrowingVFX(const FVector& burrowLocation);
    
public:
    UFUNCTION(BlueprintCallable)
    void DeactivateVineDropping();
    
    UFUNCTION(BlueprintCallable)
    void ActivateVineDropping(EMamapedeVineSpawningSource NewVineSpawningSource);
    
};

