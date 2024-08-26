#pragma once
#include "CoreMinimal.h"
#include "PushMePullYouCrusherBase.h"
#include "PushMePullYouLunchbox.generated.h"

class APullOutPlatform;
class UAkAudioEvent;
class UAkComponent;
class UBoxComponent;
class USplineComponent;
class USplineFollowerComponent;

UCLASS(Abstract, Blueprintable)
class APushMePullYouLunchbox : public APushMePullYouCrusherBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* CollisionBoxComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAkComponent* Ak_PushMePullYouLunchbox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USplineComponent* SplineAfterFallingComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USplineFollowerComponent* SplineFollowerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<APullOutPlatform> FirstPullOutPlatform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<APullOutPlatform> SecondPullOutPlatform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* FallStartAudio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* FallEndAudio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinEndReachedDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* FallingAudioEvent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_HasFallen, meta=(AllowPrivateAccess=true))
    bool HasFallen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MinimumPullOutPlatformPositionAfterFalling, meta=(AllowPrivateAccess=true))
    float MinimumPullOutPlatformPositionAfterFalling;
    
public:
    APushMePullYouLunchbox(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void OnSplineUpdatePosition(float InCurrentPosition, float InDeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void OnSecondPullOutPlatformPositionUpdated(float Position);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_MinimumPullOutPlatformPositionAfterFalling();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_HasFallen();
    
    UFUNCTION(BlueprintCallable)
    void OnFirstPullOutPlatformPositionUpdated(float Position);
    
protected:
    UFUNCTION(BlueprintCallable)
    void EDITOR_CopyProperties(APullOutPlatform* InFirstPullOutPlatform, APullOutPlatform* InSecondPullOutPlatform);
    
};

