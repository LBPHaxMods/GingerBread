#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "Engine/DataTable.h"
#include "EBoomerangAnimState.h"
#include "HitPointsModifierComponentEventReceiver.h"
#include "Templates/SubclassOf.h"
#include "Velociportable.h"
#include "BoomerangProjectile.generated.h"

class ASackboy;
class UAkAudioEvent;
class UAkComponent;
class UCameraShake;
class UForceFeedbackEffect;
class UGameplayTagComponent;
class UInteractionComponent;
class UMaterialInstanceDynamic;
class UMaterialInterface;
class UParticleSystemComponent;
class UPrimitiveComponent;
class URegistrationComponent;
class USceneComponent;
class USkeletalMeshComponent;
class USpotShadowComponent;
class UVectorFieldComponent;

UCLASS(Blueprintable)
class GINGERBREAD_API ABoomerangProjectile : public AActor, public IHitPointsModifierComponentEventReceiver, public IVelociportable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle AttackTableEntry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* CraftCutterMasterMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* CraftCutterDynamicMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* Collision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* SkeletalMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInteractionComponent* InteractionCollider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USpotShadowComponent* SpotShadow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGameplayTagComponent* GameplayTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URegistrationComponent* RegistrationTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAkComponent* AkComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVectorFieldComponent* CCVectorField;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* InAirVFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* BoomerangDestroyedClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector HitNormal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASackboy* ThrowingSackboy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* CatchAudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* BounceAudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* ThrowLoopAudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* ThrowLoopStopAudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* DestroyAudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* ThrowGamepadHapticEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* ThrowHapticEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* CatchGamepadHapticEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* CatchSpatialHapticEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UForceFeedbackEffect* BounceVibration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UForceFeedbackEffect* CatchVibration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UForceFeedbackEffect* ThrowVibration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCameraShake> BounceShake;
    
    ABoomerangProjectile(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateMaterials();
    
    UFUNCTION(BlueprintCallable)
    void Unpause();
    
    UFUNCTION(BlueprintCallable)
    void Teleport(FVector Position, FRotator Rotation, float Speed, float Duration, bool rethrow);
    
    UFUNCTION(BlueprintCallable)
    void SetCollision(bool enable_collision, bool enable_overlaps);
    
    UFUNCTION(BlueprintCallable)
    void SetAnimState(EBoomerangAnimState State);
    
    UFUNCTION(BlueprintCallable)
    bool ReturnToSackboy();
    
    UFUNCTION(BlueprintCallable)
    void PAUSE();
    
    UFUNCTION(BlueprintCallable)
    void OnInterruptFlight(FVector force_direction);
    
    UFUNCTION(BlueprintCallable)
    bool IsPaused();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFlying() const;
    
    UFUNCTION(BlueprintCallable)
    void HoverBoomerang(float Time);
    
    UFUNCTION(BlueprintCallable)
    bool ExitTheWhirlwind(USceneComponent* Target, bool bInstant);
    
    UFUNCTION(BlueprintCallable)
    bool EnterTheWhirlwind(USceneComponent* Target, float Distance, float Speed, int32 revolutions, const FVector& local_axis);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector CalculateCatchHapticsOrigin() const;
    

    // Fix for true pure virtual functions not being implemented
};

