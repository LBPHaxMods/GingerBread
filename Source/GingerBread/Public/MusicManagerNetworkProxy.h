#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "MusicManagerNetworkProxy.generated.h"

class AMusicManager;
class ARhythmicRammer;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GINGERBREAD_API UMusicManagerNetworkProxy : public UActorComponent {
    GENERATED_BODY()
public:
    UMusicManagerNetworkProxy(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void RhythmicRammerSynchroniseRequest(ARhythmicRammer* RhythmicRammer);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void RequestSync(AMusicManager* Manager);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void HandleSync(AMusicManager* Manager, int32 ServerPlayingTime, FName ServerCurrentSection, int32 ServerCurrentSegment, int32 ServerCurrentSegmentDuration, int32 ServerLastSectionBeat, int32 ServerCurrentSectionBeatCount, int32 ServerCompletedSectionBeatCount, int32 ServerCompletedTotalBeatCount);
    
};

