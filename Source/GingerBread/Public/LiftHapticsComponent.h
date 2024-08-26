#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/SceneComponent.h"
#include "ESackboyDetection.h"
#include "ESackboyDetectionDetails.h"
#include "LiftHapticsComponent.generated.h"

class AActor;
class ASackboy;
class UAkAudioEvent;
class UAkComponent;
class UPrimitiveComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GINGERBREAD_API ULiftHapticsComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoPilot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseHapticsComponentAndSetupListeners;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPlayOnce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MovementTresholdDetection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool RestartOnMoveDirectionChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* StartMoveHapticEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* EndMoveHapticEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* MoveLoopHapticEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* StopMoveLoopHapticEvent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowDebug;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAkComponent* HapticsComponent;
    
public:
    ULiftHapticsComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    static void StopLiftHaptics(AActor* LiftActor);
    
    UFUNCTION(BlueprintCallable)
    static void SetLiftHapticsAutoDetect(AActor* LiftActor, bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    static void PlayLiftHaptics(AActor* LiftActor);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnSackboyStoppedTouchingSomething(AActor* pTouchedActor, UPrimitiveComponent* pTouchedCollider, ASackboy* pSackboy, ESackboyDetection DetectionType, ESackboyDetectionDetails DetectionDetails);
    
    UFUNCTION(BlueprintCallable)
    void OnSackboyStartedTouchingSomething(AActor* pTouchedActor, UPrimitiveComponent* pTouchedCollider, ASackboy* pSackboy, ESackboyDetection DetectionType, ESackboyDetectionDetails DetectionDetails, FVector UsefulVec, int32 UsefulInt);
    
};

