#include "MusicManagerNetworkProxy.h"

UMusicManagerNetworkProxy::UMusicManagerNetworkProxy(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UMusicManagerNetworkProxy::RhythmicRammerSynchroniseRequest_Implementation(ARhythmicRammer* RhythmicRammer) {
}
bool UMusicManagerNetworkProxy::RhythmicRammerSynchroniseRequest_Validate(ARhythmicRammer* RhythmicRammer) {
    return true;
}

void UMusicManagerNetworkProxy::RequestSync_Implementation(AMusicManager* Manager) {
}
bool UMusicManagerNetworkProxy::RequestSync_Validate(AMusicManager* Manager) {
    return true;
}

void UMusicManagerNetworkProxy::HandleSync_Implementation(AMusicManager* Manager, int32 ServerPlayingTime, FName ServerCurrentSection, int32 ServerCurrentSegment, int32 ServerCurrentSegmentDuration, int32 ServerLastSectionBeat, int32 ServerCurrentSectionBeatCount, int32 ServerCompletedSectionBeatCount, int32 ServerCompletedTotalBeatCount) {
}


