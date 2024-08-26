#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ERhythmicMotionWakeAction.h"
#include "MusicStateTableRow.h"
#include "RhythmicBeatReceiver.h"
#include "RhythmicMotionSetup.h"
#include "RhythmicMoverToolKeyframeIdentifier.h"
#include "RhythmicMoverToolReplicatedPosition.h"
#include "WakeSleep.h"
#include "PlayerCountActor.h"
#include "RhythmicMoverTool.generated.h"

class AActor;
class ARhythmManager;
class UAkAudioEvent;
class UAkComponent;
class UBillboardComponent;
class UCurveFloat;
class USceneComponent;
class UTimelineComponent;
class UTriggerActorComponent;

UCLASS(Abstract, Blueprintable)
class ARhythmicMoverTool : public APlayerCountActor, public IWakeSleep, public IRhythmicBeatReceiver {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* SceneComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBillboardComponent* BillboardComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTimelineComponent* MotionTimeline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTriggerActorComponent* TriggerActorComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAkComponent* AkComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAkComponent* AkHapticsComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRhythmicMotionSetup ActiveMotionSetup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRhythmicMotionSetup IdleMotionSetup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* TargetActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMusicStateTableRow> ActiveMusicStates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShouldListenToAkMarkers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AkMarkerToListenTo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShouldMoveAkComponentWithTargetActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector AkComponentTargetActorOffset;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ERhythmicMotionWakeAction::Type> WakeAction;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool InformTargetActorOfMotion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* DefaultMotionCurve;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NonPIEDuplicateTransient, NonTransactional, meta=(AllowPrivateAccess=true))
    AActor* PreviousTargetActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ReplicatedPosition, meta=(AllowPrivateAccess=true))
    FRhythmicMoverToolReplicatedPosition ReplicatedPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TArray<FRhythmicMoverToolKeyframeIdentifier> PlayedOnlyOnceAudioKeyframes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform TargetActorInitialTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HasSetTargetActorInitialTransform;
    
public:
    ARhythmicMoverTool(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void SortIdleMotionKeyframes();
    
    UFUNCTION(BlueprintCallable)
    void SortActiveMotionKeyframes();
    
public:
    UFUNCTION(BlueprintCallable)
    void ReplaceTargetActorReference(AActor* OldActor, AActor* NewActor);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRhythmManagerInSyncWithServer(ARhythmManager* pRhythmManager, FName PendingSectionName);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ReplicatedPosition();
    
    UFUNCTION(BlueprintCallable)
    void OnMusicStateChanged(ARhythmManager* pRhythmManager, const FMusicStateTableRow NewMusicState, const FMusicStateTableRow PreviousMusicState);
    
    UFUNCTION(BlueprintCallable)
    void OnMotionTimelineUpdate(const float Alpha);
    
    UFUNCTION(BlueprintCallable)
    void OffsetIdleMotionKeyframes();
    
    UFUNCTION(BlueprintCallable)
    void OffsetActionMotionKeyframes();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsUsingActiveMotionSetup() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRhythmicMotionSetup GetIdleMotionSetup() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRhythmicMotionSetup GetCurrentMotionSetup() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRhythmicMotionSetup GetActiveMotionSetup() const;
    
    UFUNCTION(BlueprintCallable)
    int32 AssignHapticEventForExistingAudioEvent(UAkAudioEvent* LookUpAudio, UAkAudioEvent* HapticEventToAssign);
    

    // Fix for true pure virtual functions not being implemented
};

