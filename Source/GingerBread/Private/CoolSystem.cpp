#include "CoolSystem.h"
#include "AkComponent.h"
#include "Net/UnrealNetwork.h"

ACoolSystem::ACoolSystem(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->AKMultiplierTimer = CreateDefaultSubobject<UAkComponent>(TEXT("AKMultiplierTimer"));
    this->ScoreBubbleMaterial = NULL;
    this->ScoreBubbleMaterialInstance = NULL;
    this->FlickeringScoreBubbleMaterial = NULL;
    this->FlickeringScoreBubbleMaterialInstance = NULL;
    this->ScoreBubbleStackMaterial = NULL;
    this->ScoreBubbleStackMaterialInstance = NULL;
    this->ScoreBubleFxBlueprint = NULL;
    this->ScoreAwardedAudioEvent = NULL;
    this->ScoreResetPitchAudioEvent = NULL;
    this->ScoreResetPitchDelay = 3.00f;
    this->TrophyPoints = 0;
    this->TimeBeforeStartToExpire = 5.00f;
    this->MultiplierActivatedEvent = NULL;
    this->MultiplierTickEvent = NULL;
    this->StartToExpireEvent = NULL;
    this->StartToExpireStopEvent = NULL;
    this->ExpiredEvent = NULL;
    this->SpawnScoreBubbleEvent = NULL;
    this->MultiplierTickDelay = 0.10f;
}

void ACoolSystem::UpdateBubbleColour() {
}

void ACoolSystem::TeamWipeDeactivateScoreMultiplier_Implementation() {
}
bool ACoolSystem::TeamWipeDeactivateScoreMultiplier_Validate() {
    return true;
}


void ACoolSystem::SpawnScoreBubbles(const UObject* WorldContextObject, ASackboy* Sackboy, const FVector& Location, int32 Count, const FVector LaunchVelocity) {
}

void ACoolSystem::SetScoreBubbleColour(const FVector& ColourVector) {
}

void ACoolSystem::RestoreSnapshot(const FName& snapshot_label) {
}

void ACoolSystem::ResetScoreMultiplier() {
}

void ACoolSystem::ResetScore() {
}

void ACoolSystem::ResetMultiplierTierTimer() {
}

void ACoolSystem::RemoveSnapshot(const FName& snapshot_label) {
}

void ACoolSystem::PostPointsCollection_Implementation(ASackboy* Sackboy, EScoreSource Source, FVector_NetQuantize100 Location, int32 Points) {
}
bool ACoolSystem::PostPointsCollection_Validate(ASackboy* Sackboy, EScoreSource Source, FVector_NetQuantize100 Location, int32 Points) {
    return true;
}

void ACoolSystem::OnSackboySpawned(ASackboy* Sackboy, TEnumAsByte<ESackboySpawnType> spawn_type, USpawnPointComponent* spawn_point) {
}

void ACoolSystem::OnSackboyDied(ASackboy* Sackboy) {
}

void ACoolSystem::OnRep_TrophyPoints() {
}

void ACoolSystem::OnPlayerJoinLeaveEvent(EPlayerJoinDirection Direction, const FGingerbreadPlayerId& player_id, bool IsForcedPlayer) {
}

void ACoolSystem::OnMusicEvent(TEnumAsByte<MusicEventType> MusicEvent, float BarDuration, float BeatDuration) {
}

void ACoolSystem::OnEventDispatcherAvailable(AActor* ManagerActor) {
}

void ACoolSystem::OnCheckpointManagerAvailable(AActor* ManagerActor) {
}

void ACoolSystem::OnAllPlayersDied(USpawnPointComponent* spawn_point) {
}

void ACoolSystem::Multicast_PlaySpawnScoreBubblesEvent_Implementation(FVector Location) {
}

bool ACoolSystem::IsSystemEnabled() const {
    return false;
}

bool ACoolSystem::IsScoreMultiplierActive() const {
    return false;
}

void ACoolSystem::IncrementScoreMultiplierTier() {
}

int32 ACoolSystem::GetTrophyPoints() const {
    return 0;
}

float ACoolSystem::GetTrophyMeterFill() const {
    return 0.0f;
}

FLevelTrophyRow ACoolSystem::GetTrophyInfo() const {
    return FLevelTrophyRow{};
}

int32 ACoolSystem::GetSilverTrophyWinThreshold() const {
    return 0;
}

bool ACoolSystem::GetScoreThresholdsForMap(const FString& MapName, int32& OutBronze, int32& OutSilver, int32& OutGold) {
    return false;
}

float ACoolSystem::GetScoreMultiplierValue() const {
    return 0.0f;
}

float ACoolSystem::GetScoreMultiplierTimeLeft() const {
    return 0.0f;
}

int32 ACoolSystem::GetScoreMultiplierTier() const {
    return 0;
}

float ACoolSystem::GetScoreMultiplierDuration() const {
    return 0.0f;
}

float ACoolSystem::GetScoreMultiplier() const {
    return 0.0f;
}

FVector ACoolSystem::GetScoreBubbleColourVector() const {
    return FVector{};
}

int32 ACoolSystem::GetScore() const {
    return 0;
}

UMaterialInstanceDynamic* ACoolSystem::GetOrCreateScoreBubbleStackMaterial() {
    return NULL;
}

UMaterialInstanceDynamic* ACoolSystem::GetOrCreateMaterial(bool getFlickering) {
    return NULL;
}

ACoolSystem* ACoolSystem::GetInstance(const UObject* WorldContextObject) {
    return NULL;
}

int32 ACoolSystem::GetIndividualMultiplierCollectedScore(ASackboy* Sackboy) const {
    return 0;
}

int32 ACoolSystem::GetIndividualCollectedScore(ASackboy* Sackboy) const {
    return 0;
}

int32 ACoolSystem::GetGoldTrophyWinThreshold() const {
    return 0;
}

TEnumAsByte<ETrophy::Type> ACoolSystem::GetCurrentTrophy() const {
    return ETrophy::DefaultZero;
}

float ACoolSystem::GetCreativeBurstPercentageComplete() const {
    return 0.0f;
}

int32 ACoolSystem::GetBronzeTrophyWinThreshold() const {
    return 0;
}

void ACoolSystem::EndCreativeBurst() {
}

void ACoolSystem::DecrementScoreMultiplierTier() {
}

void ACoolSystem::DeactivateScoreMultiplier_Implementation() {
}
bool ACoolSystem::DeactivateScoreMultiplier_Validate() {
    return true;
}

void ACoolSystem::CreateSnapshot(const FName& snapshot_label) {
}

void ACoolSystem::BroadcastScoreReset_Implementation() {
}
bool ACoolSystem::BroadcastScoreReset_Validate() {
    return true;
}

void ACoolSystem::BeginCreativeBurst(ASackboy* triggering_sackboy) {
}

void ACoolSystem::AwardScoreBubble(const UObject* WorldContextObject, ASackboy* Sackboy, const FVector& Location) {
}

void ACoolSystem::AwardScore(const UObject* WorldContextObject, ASackboy* Sackboy, EScoreSource Source, const FVector& Location, int32 Points) {
}

void ACoolSystem::ActivateScoreMultiplier_Implementation() {
}
bool ACoolSystem::ActivateScoreMultiplier_Validate() {
    return true;
}

void ACoolSystem::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ACoolSystem, TrophyPoints);
}


