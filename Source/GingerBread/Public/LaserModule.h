#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ELaserAudioType.h"
#include "ELaserModuleType.h"
#include "ESackboyActivity.h"
#include "ESackboyDetection.h"
#include "ESackboyDetectionDetails.h"
#include "HitPointsModifierComponentEventReceiver.h"
#include "LaserModuleUnit.h"
#include "LevelObject.h"
#include "SackboyDetection.h"
#include "WakeSleep.h"
#include "PlayerCountActor.h"
#include "LaserModule.generated.h"

class AActor;
class ABoomerangProjectile;
class ASackboy;
class UAkAudioEvent;
class UAkComponent;
class UHitPointsModifierComponent;
class UInteractionComponent;
class UMaterialInstance;
class UMaterialInterface;
class UParticleSystem;
class UPrimitiveComponent;
class UStaticMesh;
class UTriggerActorComponent;

UCLASS(Blueprintable)
class ALaserModule : public APlayerCountActor, public ISackboyDetection, public IHitPointsModifierComponentEventReceiver, public ILevelObject, public IWakeSleep {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAkComponent* AkLaserEmitter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHitPointsModifierComponent* HitPointsModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTriggerActorComponent* TriggerActor;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool PlaySound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* AudioEventStaticStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* AudioEventStaticStop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* AudioEventBackAndForthStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* AudioEventBackAndForthStop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* AudioEventCircularRotationStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* AudioEventCircularRotationStop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* AudioEventStartOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* AudioEventStopOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* AudioEventImpact;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELaserModuleType LaserType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELaserAudioType AudioType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumberOfLasers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LaserSpacing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool LaserOnAtStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxBeamLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> ActorsToIgnore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ApplyBurnDecals;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AddDropLight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDropLightRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool LaserHasXRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DebugShowCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float QuickFireDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BeamRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DecalOversize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LengthDiffForUpdate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* ModuleStaticMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* ApertureStaticMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* RingStaticMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* BeamStaticMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* BurnStaticMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstance* ModuleMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstance* ApertureMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstance* RingMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* BeamMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstance* DropLightMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstance* BurnDecalMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* BurnMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* BurnParticles;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLaserModuleUnit> LaserModuleUnits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsOn, meta=(AllowPrivateAccess=true))
    bool IsOn;
    
public:
    ALaserModule(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void RebuildAllUnits();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IsOn();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void HandleBeamUnblocked(const int32 beamIndex);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void HandleBeamBlocked(const int32 beamIndex, const float blockDistance, const FVector& blockNormal, UPrimitiveComponent* blockComponent);
    

    // Fix for true pure virtual functions not being implemented
public:
    UFUNCTION()
    bool OnSackboyWantsToFallThroughMe(ASackboy* Sackboy, UPrimitiveComponent* Collider) override PURE_VIRTUAL(OnSackboyWantsToFallThroughMe, return false;);
    
    UFUNCTION()
    void OnSackboyStoppedTouchingMe(ASackboy* Sackboy, UPrimitiveComponent* Collider, ESackboyDetection DetectionType, ESackboyActivity currentActivity, ESackboyDetectionDetails DetectionDetails) override PURE_VIRTUAL(OnSackboyStoppedTouchingMe,);
    
    UFUNCTION()
    void OnSackboyStartedTouchingMe(ASackboy* Sackboy, UPrimitiveComponent* Collider, ESackboyDetection DetectionType, ESackboyActivity currentActivity, ESackboyDetectionDetails DetectionDetails, const FVector usefulVector, int32 usefulInteger) override PURE_VIRTUAL(OnSackboyStartedTouchingMe,);
    
    UFUNCTION()
    void OnSackboySlappedMe(ASackboy* Sackboy, UPrimitiveComponent* Collider, int32 SlapLevel, FVector slapHitLocation, bool isLeftHandSlap) override PURE_VIRTUAL(OnSackboySlappedMe,);
    
    UFUNCTION()
    void OnSackboyExitedMeInteract(ASackboy* Sackboy, UInteractionComponent* Collider) override PURE_VIRTUAL(OnSackboyExitedMeInteract,);
    
    UFUNCTION()
    void OnSackboyExitedMe(ASackboy* Sackboy, UPrimitiveComponent* Collider) override PURE_VIRTUAL(OnSackboyExitedMe,);
    
    UFUNCTION()
    void OnSackboyEnteredMeInteract(ASackboy* Sackboy, UInteractionComponent* Collider) override PURE_VIRTUAL(OnSackboyEnteredMeInteract,);
    
    UFUNCTION()
    void OnSackboyEnteredMe(ASackboy* Sackboy, UPrimitiveComponent* Collider) override PURE_VIRTUAL(OnSackboyEnteredMe,);
    
    UFUNCTION()
    void OnFishingRodPulledMe(ASackboy* Sackboy, UPrimitiveComponent* Collider, const FVector& Position, const FVector& Force) override PURE_VIRTUAL(OnFishingRodPulledMe,);
    
    UFUNCTION()
    void OnFishingRodHitMe(ASackboy* Sackboy, UPrimitiveComponent* hit_collider, const FVector& Velocity) override PURE_VIRTUAL(OnFishingRodHitMe,);
    
    UFUNCTION()
    void OnFishingRodDetachedFromMe(ASackboy* Sackboy, UPrimitiveComponent* hit_collider, const FVector& attach_position) override PURE_VIRTUAL(OnFishingRodDetachedFromMe,);
    
    UFUNCTION()
    void OnFishingRodAttachedToMe(ASackboy* Sackboy, UPrimitiveComponent* hit_collider, const FVector& attach_position) override PURE_VIRTUAL(OnFishingRodAttachedToMe,);
    
    UFUNCTION()
    void OnBoomerangHitMe(ASackboy* Sackboy, UPrimitiveComponent* Collider, ABoomerangProjectile* Boomerang, FVector Velocity, int32 charge_level, float boomerang_damage) override PURE_VIRTUAL(OnBoomerangHitMe,);
    
    UFUNCTION()
    void OnBlastersHitMe(ASackboy* Sackboy, UPrimitiveComponent* Collider, const FVector& hit_location, const FVector& hit_normal) override PURE_VIRTUAL(OnBlastersHitMe,);
    
};

