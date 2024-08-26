#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "ArtMove.h"
#include "ArtMoveClip.h"
#include "ArtMoveSequence.h"
#include "ArtMoverClipPlayCallbackSignatureDelegate.h"
#include "EMusicArtMoverLerpMode.h"
#include "MoveTarget.h"
#include "MusicEventType.h"
#include "ArtMoverComponent.generated.h"

class USceneComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GINGERBREAD_API UArtMoverComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AutoPlay;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AutoDisableCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EnableMusic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool TimeInBeats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AutoChangeMusicSections;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ClipJumpOnBeat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ClipJumpBeatCycleLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ClipJumpBeatCycleStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AdvanceOnBeat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BeatAdvanceDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BeatAdvanceDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BeatCycleLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BeatCycleStartIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EMusicArtMoverLerpMode::Type> BeatAdvanceLerpMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsWorldSpace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EnableRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EnableScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool RandomInitialPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RandomInitialPositionGap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool RandomSpeedMul;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RandomSpeedMulMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RandomSpeedMulMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MoveParent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMoveTarget ParentMoveTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMoveTarget> MoveThese;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FArtMove> Moves;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FArtMoveSequence> MoveSequences;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName StartSequenceName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CurrentSequenceName;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FArtMoverClipPlayCallbackSignature OnClipPlayStart;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FArtMoverClipPlayCallbackSignature OnClipPlayEnd;
    
    UArtMoverComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StopMoveTarget(int32 TargetIndex);
    
    UFUNCTION(BlueprintCallable)
    void Stop();
    
    UFUNCTION(BlueprintCallable)
    void StartingPositions();
    
    UFUNCTION(BlueprintCallable)
    void SetStartSequence(const FName& SequenceName);
    
    UFUNCTION(BlueprintCallable)
    bool SetSequenceClip(const FName& SequenceName, const int32 Index, const FArtMoveClip& Clip);
    
    UFUNCTION(BlueprintCallable)
    void SetMoveTargetClipTime(int32 MoveTargetIndex, float CurrentTime, float StartTime, bool MoveToPosition);
    
    UFUNCTION(BlueprintCallable)
    void SetMoveTargetClip(int32 MoveTargetIndex, FName SequenceName, int32 ClipIndex, float Time, bool NewPlay, bool MoveToPosition);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentSequence(const FName& SequenceName, bool PlayFromStart);
    
    UFUNCTION(BlueprintCallable)
    void RefreshCache_Slow();
    
    UFUNCTION(BlueprintCallable)
    void PlayMoveTarget(int32 TargetIndex);
    
    UFUNCTION(BlueprintCallable)
    void PlayClip(FName SequenceName, int32 ClipIndex, float FromTime, bool SetToRemainingTime);
    
    UFUNCTION(BlueprintCallable)
    void Play();
    
    UFUNCTION(BlueprintCallable)
    void OnMusicEvent(TEnumAsByte<MusicEventType> MusicEvent, float BarDuration, float BeatDuration, FName CueName, int32 CurrentBar, int32 CurrentBeat, int32 BeatsPerBar, int32 SectionBeatCount, int32 TotalBeatCount);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetSequenceClip(const FName& SequenceName, const int32 Index, FArtMoveClip& ClipCopy) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumMoveTargets() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMoveTargetTime(int32 MoveTargetIndex, bool UnitTime, bool LerpedUnitTime) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 FindMoveTargetIndex(USceneComponent* MoveThis) const;
    
    UFUNCTION(BlueprintCallable)
    int32 AddMoveTarget(USceneComponent* MoveThis);
    
    UFUNCTION(BlueprintCallable)
    bool AddMove(FName MoveName, FTransform From, FTransform To, USceneComponent* Spline);
    
    UFUNCTION(BlueprintCallable)
    int32 AddClipToSequence(const FName& SequenceName, const FArtMoveClip& Clip);
    
};

