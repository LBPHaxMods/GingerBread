#pragma once

#include "CoreMinimal.h"
#include "MusicStateTableRow.h"
#include "RhythmicActivationKeyframe.h"
#include "RhythmicBeatRange.h"
#include "RhythmicBeatReceiver.h"
#include "WakeSleep.h"
#include "PlayerCountActor.h"
#include "RhythmicActivator.generated.h"

class AActor;
class ARhythmManager;
class USceneComponent;
class UTriggerActorComponent;

UCLASS(Abstract, Blueprintable)
class ARhythmicActivator : public APlayerCountActor, public IWakeSleep, public IRhythmicBeatReceiver {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* SceneComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTriggerActorComponent* TriggerActorComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRhythmicActivationKeyframe> Keyframes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BeatsPerLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMusicStateTableRow> ActiveMusicStates;
    
public:
    ARhythmicActivator(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void SortKeyframes();
    
public:
    UFUNCTION(BlueprintCallable)
    void ReplaceTargetActorReferences(AActor* OldActor, AActor* NewActor);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRhythmManagerInSyncWithServer(ARhythmManager* pRhythmManager, FName PendingSectionName);
    
    UFUNCTION(BlueprintCallable)
    void OnMusicStateChanged(ARhythmManager* pRhythmManager, const FMusicStateTableRow NewMusicState, const FMusicStateTableRow PreviousMusicState);
    
    UFUNCTION(BlueprintCallable)
    void OffsetKeyframes();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetKeyframeDurationsForActor(AActor* Actor, TArray<float>& OutKeyframeDurations) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetKeyframeBeatsForActor(AActor* Actor, TArray<float>& OutKeyframeBeats) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetBeatRangesForActor(AActor* Actor, const uint8 UserData, TArray<FRhythmicBeatRange>& OutBeatRanges) const;
    

    // Fix for true pure virtual functions not being implemented
};

