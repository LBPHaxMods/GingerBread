#include "RhythmManager.h"
#include "AkComponent.h"
#include "Components/SceneComponent.h"
#include "Net/UnrealNetwork.h"
#include "NetworkEventComponent.h"
#include "RhythmicMaterialCoordinatorComponent.h"

ARhythmManager::ARhythmManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));

    this->SceneComponent = (USceneComponent*)RootComponent;
    this->NetworkEventComponent = CreateDefaultSubobject<UNetworkEventComponent>(TEXT("NetworkEventComponent"));
    this->RhythmicMaterialCoordinatorComponent = CreateDefaultSubobject<URhythmicMaterialCoordinatorComponent>(TEXT("RhythmicMaterialCoordinatorComponent"));
    this->AkComponent = CreateDefaultSubobject<UAkComponent>(TEXT("AkComponent"));
    this->FillDataTable = NULL;
    this->MusicTrack = NULL;
    this->InitialTempo = 0.00f;
    this->StartMusicImmediately = true;
    this->StartMusicDelay = 2.00f;
    this->MusicStartTime = 0;
    this->BeatBucketCount = 16;
    this->StopMusicEvent = NULL;
    this->HasServerPostedMusicEvent = ERhythmManagerPostedMusicState::Indeterminate;
    this->AkComponent->SetupAttachment(RootComponent);
}

void ARhythmManager::UnsubscribeFromBeat(UObject* Subscriber, const float Beat, const int32 LoopPeriod) {
}

void ARhythmManager::UnsubscribeFromAllBeats(UObject* Subscriber) {
}

void ARhythmManager::UnsubscribeFromAkMarker(UObject* pSubscriber, const FName MarkerLabel) {
}

void ARhythmManager::SubscribeToBeat(UObject* Subscriber, const float Beat, const int32 LoopPeriod) {
}

void ARhythmManager::SubscribeToAkMarker(UObject* Subscriber, const FName MarkerLabel) {
}

void ARhythmManager::StartMusicManually() {
}

void ARhythmManager::RequestMusicState(const FMusicStateTableRow& MusicState) {
}

void ARhythmManager::RemoveAudioEventOnBeat(UAkComponent* InAkComponent, UAkAudioEvent* InAudioEvent, float Beat, int32 LoopPeriod) {
}

void ARhythmManager::PostMusicEvent() {
}

void ARhythmManager::OnRep_ServerAkMarkerTriggerCounts() {
}

void ARhythmManager::OnRep_HasServerPostedMusicEvent() {
}

void ARhythmManager::OnNetworkEvent(const FName EventName) {
}

void ARhythmManager::OnLateJoinerSyncReceivedEvent(AMusicManager* pMusicManager, FName PendingSectionName) {
}

void ARhythmManager::OnGingerbreadNetworkManagerAvailable(AActor* pManagerActor) {
}

void ARhythmManager::OnAkMusicEvent(TEnumAsByte<MusicEventType> MusicEvent, float BarDuration, float BeatDuration, FName CueName, int32 CurrentBar, int32 CurrentBeat, int32 BeatsPerBar, int32 SectionBeatCount, int32 TotalBeatCount) {
}

void ARhythmManager::OnAkMarkerEvent(TEnumAsByte<MusicEventType> MusicEvent, FName MarkerLabel) {
}

ARhythmManager* ARhythmManager::GetRhythmManager(UObject* WorldContextObject) {
    return NULL;
}

FName ARhythmManager::GetMusicStateGroup() const {
    return NAME_None;
}

bool ARhythmManager::GetIsInSyncWithServer() const {
    return false;
}

float ARhythmManager::GetCurrentSectionStartBeatCount() const {
    return 0.0f;
}

float ARhythmManager::GetCurrentSectionFractionalBeat() const {
    return 0.0f;
}

FMusicStateTableRow ARhythmManager::GetCurrentMusicState() const {
    return FMusicStateTableRow{};
}

float ARhythmManager::GetCurrentFractionalBeat() const {
    return 0.0f;
}

float ARhythmManager::GetCurrentBeatWithinLoopPeriod(const int32 LoopPeriod) const {
    return 0.0f;
}

float ARhythmManager::GetCurrentBeatDuration() const {
    return 0.0f;
}

void ARhythmManager::DEBUG_SeekMusic() {
}

void ARhythmManager::DEBUG_JumpToSection() {
}

float ARhythmManager::CalculateTimeUntilNextFractionOfBeat(const float Fraction, const float MinimumDeltaTime) const {
    return 0.0f;
}

float ARhythmManager::CalculateBeatWithinLoopPeriod(const float Beat, const int32 LoopPeriod) {
    return 0.0f;
}

void ARhythmManager::BroadcastMusicStartedEvent_Implementation() {
}

void ARhythmManager::AUTH_PostMusicEventWithCSP() {
}

void ARhythmManager::AUTH_OnAllPlayersArrived() {
}

bool ARhythmManager::AddAudioEventOnBeat(UAkComponent* InAkComponent, UAkAudioEvent* InAudioEvent, float Beat, int32 LoopPeriod) {
    return false;
}

void ARhythmManager::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ARhythmManager, ServerAkMarkerTriggerCounts);
    DOREPLIFETIME(ARhythmManager, ServerRequestedMusicState);
    DOREPLIFETIME(ARhythmManager, HasServerPostedMusicEvent);
}


