#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "EMoverToolUsage.h"
#include "EMoverTypes.h"
#include "MoverToolEventsStruct.h"
#include "MoverToolVisibilityStruct.h"
#include "Templates/SubclassOf.h"
#include "MoverTool2.generated.h"

class UAkAudioEvent;
class UAkComponent;
class UCameraShake;
class UForceFeedbackEffect;
class USplineFollowerComponent;

UCLASS(Blueprintable)
class AMoverTool2 : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMoverToolEventsStruct> MoverToolEventsArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMoverToolVisibilityStruct> VisibiltyMovingEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* StartFwdMovementHapticEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* StopFwdMovementHapticEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* StartBackMovementHapticEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* StopBackMovementHapticEvent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Initialised, meta=(AllowPrivateAccess=true))
    bool bInitialised;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMoverToolUsage Usage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAkComponent* AkHapticsMoverToolComponent;
    
public:
    AMoverTool2(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void UpdateMoverTool();
    
    UFUNCTION(BlueprintCallable)
    void StopMotionCallback();
    
    UFUNCTION(BlueprintCallable)
    void StartMotionCallback();
    
    UFUNCTION(BlueprintCallable)
    void PlayHapticEvent(UAkAudioEvent* InHapticEvent);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnSplineReachedEndPosition(USplineFollowerComponent* SplineFollower, bool WasTravellingForward);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Initialised();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAuthorityOrLocal() const;
    
    UFUNCTION(BlueprintCallable)
    void FixupRotations(UPARAM(Ref) FRotator& startOrientation, UPARAM(Ref) FRotator& endOrientation, UPARAM(Ref) bool& forceShortest);
    
    UFUNCTION(BlueprintCallable)
    void CopyPropertiesToCode(bool updateRTPC, bool debugSrcPos, EMoverTypes movementProp, const FString& movementRTPC, const FString& deltaMovementRTPC, float SplineLength, bool loopedMotion);
    
    UFUNCTION(BlueprintCallable)
    void ClearMoverToolEvents();
    
    UFUNCTION(BlueprintCallable)
    void AddMoverToolEventToCode(float Position, uint8 Direction, UForceFeedbackEffect* Rumble, TSubclassOf<UCameraShake> CameraShake, UAkAudioEvent* Audio, UAkAudioEvent* Haptic);
    
};

