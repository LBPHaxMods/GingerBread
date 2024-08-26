#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "BouncePadSharedData.h"
#include "BounceSpeedData.h"
#include "OneShotDelegateDelegate.h"
#include "TouchScreenAppBaseComponent.h"
#include "TouchScreenAppBouncePadComponent.generated.h"

class AActor;
class UAkAudioEvent;
class UBoxComponent;
class UForceFeedbackEffect;
class UInteractionComponent;
class UMaterialInstanceDynamic;
class UMaterialInterface;
class UPrimitiveComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GINGERBREAD_API UTouchScreenAppBouncePadComponent : public UTouchScreenAppBaseComponent, public IBouncePadSharedData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LaunchSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Manual;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool OneShot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GridX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GridY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UForceFeedbackEffect* VibrationEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName VibrationName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* LaunchedAudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LaunchedAudioLaunchRTPCName;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOneShotDelegate OnOneShotComplete;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* BouncePadClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* DecalMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector DecalSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector iconScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* Collision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInteractionComponent* Interaction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* DecalDynamicMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCreateDynamicInBP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UStaticMeshComponent*> BounpadGridSMPs;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bGridChanged;
    
public:
    UTouchScreenAppBouncePadComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void OnTriggered(AActor* LaunchedActor, UPrimitiveComponent* launchedPrim, const FVector& launchDirection, const FVector& approxHitPosition);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION(BlueprintCallable)
    void OnInteractionEnd(UInteractionComponent* OverlappedComp, AActor* OtherActor, UInteractionComponent* OtherComp);
    
    UFUNCTION(BlueprintCallable)
    void OnInteractionBegin(UInteractionComponent* OverlappedComp, AActor* OtherActor, UInteractionComponent* OtherComp);
    
public:
    UFUNCTION(BlueprintCallable)
    bool IsEnabled();
    
    UFUNCTION(BlueprintCallable)
    bool GetManual();
    
    UFUNCTION(BlueprintCallable)
    float GetDuration();
    
    UFUNCTION(BlueprintCallable)
    float GetDelay();
    
    UFUNCTION(BlueprintCallable)
    void GetBounceSpeedData(FBounceSpeedData& BounceSpeedData) const;
    
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
    bool GetCancelVelocityAlongSurface() override PURE_VIRTUAL(GetCancelVelocityAlongSurface, return false;);
    
    UFUNCTION()
    FVector GetBouncePadUpVector() override PURE_VIRTUAL(GetBouncePadUpVector, return FVector{};);
    
    UFUNCTION()
    FVector GetBouncePadForwardVector() override PURE_VIRTUAL(GetBouncePadForwardVector, return FVector{};);
    
};

