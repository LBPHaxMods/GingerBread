#pragma once

#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "PhasePlatformAudio.h"
#include "WakeSleep.h"
#include "PlayerCountActor.h"
#include "PhasePlatform.generated.h"

class AActor;
class APhaseLight;
class UAkAudioEvent;
class UInteractionComponent;
class UMaterialInterface;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class APhasePlatform : public APlayerCountActor, public IWakeSleep {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Inverse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* RegularMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* InverseMaterial;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* BeginInverseAudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* BeginNormalAudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* EndInverseAudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* EndNormalAudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName IntensityRTPC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IntensityRTPCMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPhasePlatformAudio Audio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* PlatformCollider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UInteractionComponent* InteractionCollider;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<APhaseLight>> OverlappingPhaseLights;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DebugLogActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EnableDebugLogInstance;
    
public:
    APhasePlatform(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StopPhaseAudio();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartPhaseAudio();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetPhaseIntensity(float Intensity);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnEndInteractOverlap(UInteractionComponent* OverlappedComp, AActor* OtherActor, UInteractionComponent* OtherComp);
    
    UFUNCTION(BlueprintCallable)
    void OnBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION(BlueprintCallable)
    void OnBeginInteractOverlap(UInteractionComponent* OverlappedComp, AActor* OtherActor, UInteractionComponent* OtherComp);
    

    // Fix for true pure virtual functions not being implemented
};
