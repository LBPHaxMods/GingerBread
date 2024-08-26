#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EMiniSequenceFlow.h"
#include "EMiniSequenceState.h"
#include "NoParamScriptDelegateDelegate.h"
#include "SequenceCompleteEventDelegate.h"
#include "WorldMapMiniSequence.generated.h"

class AActor;
class ACameraArea;
class AWorldMapGameMode;
class AWorldMapGameState;
class ULevelUnlockCameraBehaviour;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GINGERBREAD_API UWorldMapMiniSequence : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EMiniSequenceFlow> FlowTriggers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTerminatesUnlockSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCachedOuterTickState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AWorldMapGameMode* GameMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AWorldMapGameState* WorldMapGameState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMiniSequenceState CurrentState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULevelUnlockCameraBehaviour* TransitionBehaviour;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACameraArea* TransitionCameraArea;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSequenceCompleteEvent OnCompleteEvent;
    
public:
    UWorldMapMiniSequence(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void PanCameraToTarget(AActor* TargetActor, const FNoParamScriptDelegate& Delegate);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUnplayed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlaying() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDisabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsComplete() const;
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleCameraPanComplete();
    
protected:
    UFUNCTION(BlueprintCallable)
    void EnableTransitionCameraArea(const bool bEnabled);
    
public:
    UFUNCTION(BlueprintCallable)
    void CompleteSequence();
    
protected:
    UFUNCTION(BlueprintCallable)
    void ClearTransitionCallbacks();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanBegin() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnSequenceComplete();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnSequenceBegun();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnHostSaveDataReady();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_HandleSkip();
    
    UFUNCTION(BlueprintCallable)
    void BeginSequence();
    
};

