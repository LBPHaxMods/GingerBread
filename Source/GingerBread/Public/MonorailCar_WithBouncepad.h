#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "BouncePadSharedData.h"
#include "BounceSpeedData.h"
#include "EBouncePadMeshType.h"
#include "EWorldLocation.h"
#include "MonorailCar_Standard.h"
#include "MonorailCar_WithBouncepad.generated.h"

class AActor;
class UAkAudioEvent;
class UAnimationAsset;
class UBoxComponent;
class UForceFeedbackEffect;
class UInteractionComponent;
class UMaterialInstance;
class UMaterialInstanceDynamic;
class UPrimitiveComponent;
class URollDazeOverride;
class USkeletalMesh;
class USkeletalMeshComponent;
class UStaticMesh;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class AMonorailCar_WithBouncepad : public AMonorailCar_Standard, public IBouncePadSharedData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EWorldLocation, TSoftObjectPtr<UMaterialInstance>> BouncePadMaterialAssets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UMaterialInstance>> BouncePadLightMaterialAssets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* StandardStaticMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* SunkenStaticMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* BouncePadSkeletalMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UForceFeedbackEffect* VibrationEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* LaunchedHapticEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName VibrationName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimationAsset* LaunchedAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* LaunchedAudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LaunchedAudioLaunchRTPCName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USkeletalMeshComponent*> SkeletalMeshComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UStaticMeshComponent*> StaticMeshComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BouncePadSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BouncePadGridX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BouncePadGridY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBouncePadMeshType SelectedMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LaunchSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool Manual;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool Sunken;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BouncePadHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BouncePadSunkenOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OffIntensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OnIntensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TriggeredIntensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ActiveChanged, meta=(AllowPrivateAccess=true))
    bool Active;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* BodyCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* OverlapVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInteractionComponent* InteractVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URollDazeOverride* RollDazeOverrideComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector BouncePadOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Duration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FinalBounceSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InitialBounceSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BounceHeightMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GrappleHookSwingingBounceHeightMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BouncePower;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OverlapErrorThreshold;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWorldLocation CurrentWorldLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstance* CurrentMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstance* CurrentLightMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInstanceDynamic*> DynamicLightMaterials;
    
public:
    AMonorailCar_WithBouncepad(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void OnTriggered(AActor* LaunchedActor, UPrimitiveComponent* launchedPrim, const FVector& launchDirection, const FVector& approxHitPosition);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_ActiveChanged();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION(BlueprintCallable)
    void OnInteractEnd(UInteractionComponent* OverlappedComp, AActor* OtherActor, UInteractionComponent* OtherComp);
    
    UFUNCTION(BlueprintCallable)
    void OnInteractBegin(UInteractionComponent* OverlappedComp, AActor* OtherActor, UInteractionComponent* OtherComp);
    
    UFUNCTION(BlueprintCallable)
    bool IsEnabled();
    
    UFUNCTION(BlueprintCallable)
    bool GetManual();
    
    UFUNCTION(BlueprintCallable)
    float GetDuration();
    
    UFUNCTION(BlueprintCallable)
    void GetBounceSpeedData(FBounceSpeedData& BounceSpeedData) const;
    
private:
    UFUNCTION(BlueprintCallable)
    void DisableSkeletalMeshComponentsTick(UAnimationAsset* Animation);
    
public:
    UFUNCTION(BlueprintCallable)
    int32 CalculateBouncePadIndex(const FVector hitPos) const;
    

    // Fix for true pure virtual functions not being implemented
    UFUNCTION()
    bool UpdateAnimatingLight(float theAnimationTime, int32 thePadIndex) override PURE_VIRTUAL(UpdateAnimatingLight, return false;);
    
    UFUNCTION()
    bool ShouldRestrictToPath() override PURE_VIRTUAL(ShouldRestrictToPath, return false;);
    
    UFUNCTION()
    int32 GetPathPointCount() override PURE_VIRTUAL(GetPathPointCount, return 0;);
    
    UFUNCTION()
    FVector GetPathPointAt(int32 Index) override PURE_VIRTUAL(GetPathPointAt, return FVector{};);
    
    UFUNCTION()
    float GetPathDuration() override PURE_VIRTUAL(GetPathDuration, return 0.0f;);
    
    UFUNCTION()
    bool GetDisableSackboyInAirActions() override PURE_VIRTUAL(GetDisableSackboyInAirActions, return false;);
    
    UFUNCTION()
    bool GetDisableSackboyAirSteer() override PURE_VIRTUAL(GetDisableSackboyAirSteer, return false;);
    
    UFUNCTION()
    float GetDelay() override PURE_VIRTUAL(GetDelay, return 0.0f;);
    
    UFUNCTION()
    bool GetCancelVelocityAlongSurface() override PURE_VIRTUAL(GetCancelVelocityAlongSurface, return false;);
    
    UFUNCTION()
    FVector GetBouncePadUpVector() override PURE_VIRTUAL(GetBouncePadUpVector, return FVector{};);
    
    UFUNCTION()
    FVector GetBouncePadForwardVector() override PURE_VIRTUAL(GetBouncePadForwardVector, return FVector{};);
    
};

