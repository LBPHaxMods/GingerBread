#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CollectableBase.h"
#include "Templates/SubclassOf.h"
#include "ExplorationKey.generated.h"

class AExplorationDoorway;
class UAkAudioEvent;
class UCameraEffectDataAsset;
class UCollectableHUDMoveRotatorComponent;
class UCollectableHUDMoverComponent;
class UCollectablePickupMoverComponent;
class UFloatingCollectableComponent;
class UForceFeedbackEffect;
class UGingerbreadHUDComponent;
class UParticleSystem;
class UParticleSystemComponent;
class UPoIComponent;
class UPointLightComponent;
class USpotShadowComponent;

UCLASS(Abstract, Blueprintable)
class AExplorationKey : public ACollectableBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPointLightComponent* PointLightComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USpotShadowComponent* SpotShadowComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* ParticleSystemComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPoIComponent* PoIComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFloatingCollectableComponent* FloatingCollectableComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCollectablePickupMoverComponent* CollectablePickupMoverComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCollectableHUDMoveRotatorComponent* CollectableHUDMoveRotatorComponent;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DoorwayIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AExplorationDoorway* Doorway;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGingerbreadHUDComponent> KeyringHUDComponentClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UForceFeedbackEffect* CollectedForceFeedbackEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* CollectedHapticsEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* CollectedGamepadAudio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* CollectedAudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* CollectedParticles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCameraEffectDataAsset* CollectedCameraEffect;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DataStoreIdentifier;
    
public:
    AExplorationKey(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnCollectableSpinMotionComplete(UCollectablePickupMoverComponent* pComponent, FVector KeyLocation, FVector KeyPreviousLocation);
    
    UFUNCTION(BlueprintCallable)
    void OnCollectableHUDMotionLooksComplete();
    
    UFUNCTION(BlueprintCallable)
    void OnCollectableHUDMotionComplete(UCollectableHUDMoverComponent* pComponent);
    
};

