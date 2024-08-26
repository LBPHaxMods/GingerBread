#include "RhythmicActivator.h"
#include "Components/SceneComponent.h"
#include "TriggerActorComponent.h"

ARhythmicActivator::ARhythmicActivator(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));

    this->SceneComponent = (USceneComponent*)RootComponent;
    this->TriggerActorComponent = CreateDefaultSubobject<UTriggerActorComponent>(TEXT("TriggerActorComponent"));
    this->BeatsPerLoop = 4;
}

void ARhythmicActivator::SortKeyframes() {
}

void ARhythmicActivator::ReplaceTargetActorReferences(AActor* OldActor, AActor* NewActor) {
}

void ARhythmicActivator::OnRhythmManagerInSyncWithServer(ARhythmManager* pRhythmManager, FName PendingSectionName) {
}

void ARhythmicActivator::OnMusicStateChanged(ARhythmManager* pRhythmManager, const FMusicStateTableRow NewMusicState, const FMusicStateTableRow PreviousMusicState) {
}

void ARhythmicActivator::OffsetKeyframes() {
}

void ARhythmicActivator::GetKeyframeDurationsForActor(AActor* Actor, TArray<float>& OutKeyframeDurations) const {
}

void ARhythmicActivator::GetKeyframeBeatsForActor(AActor* Actor, TArray<float>& OutKeyframeBeats) const {
}

void ARhythmicActivator::GetBeatRangesForActor(AActor* Actor, const uint8 UserData, TArray<FRhythmicBeatRange>& OutBeatRanges) const {
}


