#include "EndSequence.h"
#include "Components/SceneComponent.h"
#include "GingerbreadWidgetComponent.h"
#include "Net/UnrealNetwork.h"

AEndSequence::AEndSequence(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("EndSequenceRoot"));
    this->PrizeBubbleClass = NULL;
    this->MemoryOrbClass = NULL;
    this->CollectabellAmountClass = NULL;
    this->ScoreCountUpTime = 0.00f;
    this->FollowCameraLerpSpeed = 0.10f;
    this->ScoreboardType = EEndScoreboardType::Normal;
    this->PostResultSequence = NULL;
    this->PS5_PostResultSequence = NULL;
    this->UseEndGameFlow = false;
    this->EndGameLogic = EEndGameLogicType::LoadLevel;
    this->EntryState = EEndOfGameFlowState::NotStarted;
    this->LevelLoadingType = ELoadingType::Level;
    this->WinnerEmotion = ESackboyEmotionalState::Happy;
    this->WinnerEmotionLevel = 1;
    this->SequenceSpeedMultiplier = 1.00f;
    this->EndSequenceRoot = (USceneComponent*)RootComponent;
    this->ScreenWidgetComponent = CreateDefaultSubobject<UGingerbreadWidgetComponent>(TEXT("ScreenWidgetComponent"));
    this->m_TotalScore = 0;
    this->m_WinnerScore = 0;
    this->m_NumPlayersInScoreboard = 0;
    this->m_IsPhotoOp = false;
    this->m_WinnerPhoto = NULL;
    this->FixedCameraClass = NULL;
    this->FollowCameraClass = NULL;
    this->AUTH_CameraState = EEndSequenceCameraState::Inactive;
    this->ScreenWidgetComponent->SetupAttachment(RootComponent);
}

void AEndSequence::UpdateVotes(const int32 NumVotes, const int32 VotesMax) {
}

void AEndSequence::ShowTrophyOnWinnersHand() {
}

void AEndSequence::SetSequenceSpeedMultiplier(float NewMultiplier) {
}


void AEndSequence::SetEndSequenceStarted() {
}

void AEndSequence::SetCameraState(EEndSequenceCameraState camera_state) {
}

void AEndSequence::Server_TriggerEndSequence_Implementation() {
}

void AEndSequence::ScoreboardSequenceDelay(float Delay, bool Retrigger, FLatentActionInfo LatentInfo) {
}

void AEndSequence::RewardPrizeTier(int32 PrizeTier) {
}

void AEndSequence::ReturnToTitleScreen() {
}

void AEndSequence::ReplicateLevelResults_Implementation(int32 NumPlayers, int32 WinnerScore, int32 TotalScore, FTimespan totalTime, FGingerbreadPlayerId WinnerSackboyId, bool IsPhotoOp, const TArray<FEndSequencePlayerResult>& PlayerResults) {
}
bool AEndSequence::ReplicateLevelResults_Validate(int32 NumPlayers, int32 WinnerScore, int32 TotalScore, FTimespan totalTime, FGingerbreadPlayerId WinnerSackboyId, bool IsPhotoOp, const TArray<FEndSequencePlayerResult>& PlayerResults) {
    return true;
}

void AEndSequence::RecordMemoryOrbCollection(int32 OrbID) {
}

void AEndSequence::PutWinnerIntoActingMode() {
}

void AEndSequence::PostPhotoSequence() {
}



void AEndSequence::OnRep_SequenceSpeed() {
}

void AEndSequence::OnRep_CameraState() {
}

void AEndSequence::OnPostResultsSequenceFinished() {
}

void AEndSequence::OnCreditsTriggerEndSequence() {
}

void AEndSequence::OnCreditsStarted() {
}

void AEndSequence::OnCreditsSkipVoted(AGingerbreadPlayerController* PlayerController) {
}

void AEndSequence::OnCreditsFinished() {
}

void AEndSequence::NetMulticast_TriggerEndSequence_Implementation() {
}


void AEndSequence::InitCountUpSequence() {
}

bool AEndSequence::HasPhotoOp() const {
    return false;
}

bool AEndSequence::HasBeatenPreviousRecord_Implementation() {
    return false;
}

int32 AEndSequence::GetWinnerScore() const {
    return 0;
}

ASackboy* AEndSequence::GetWinnerSackboy() {
    return NULL;
}

FVector AEndSequence::GetWinnerPosition() const {
    return FVector{};
}

FString AEndSequence::GetWinnerDisplayName() const {
    return TEXT("");
}

FTimespan AEndSequence::GetTotalTimeToCache_Implementation() {
    return FTimespan{};
}

ASackboy* AEndSequence::GetTimedScoreboardWinner_Implementation() {
    return NULL;
}

void AEndSequence::GetTierBoundries(FRewardContents& BronzeTier, FRewardContents& SilverTier, FRewardContents& GoldTier, bool RecalculateTiers) {
}

int32 AEndSequence::GetPlayerScoresCount() const {
    return 0;
}

TArray<FEndSequencePlayerResult> AEndSequence::GetPlayerResults() const {
    return TArray<FEndSequencePlayerResult>();
}

FVector AEndSequence::GetPhotoFocusPoint() const {
    return FVector{};
}

bool AEndSequence::GetEndSequenceStarted() const {
    return false;
}

FVector AEndSequence::GetBoardFocusPoint() const {
    return FVector{};
}

int32 AEndSequence::GetActivePlayersNumber() const {
    return 0;
}

void AEndSequence::ExecuteEndLevelFlow() {
}

void AEndSequence::EndCredits() {
}

bool AEndSequence::CanRewardPrize(ASackboy* Sackboy, int32 PrizeTier) const {
    return false;
}

void AEndSequence::CalculateTierBoundries() {
}

EEndScoreboardType AEndSequence::CalculateScoreboardType_Implementation() {
    return EEndScoreboardType::Normal;
}

TMap<FGingerbreadPlayerId, float> AEndSequence::CachePlayerTimesAccrued_Implementation() {
    return TMap<FGingerbreadPlayerId, float>();
}

TMap<FGingerbreadPlayerId, int32> AEndSequence::CacheGauntletScores_Implementation() {
    return TMap<FGingerbreadPlayerId, int32>();
}

void AEndSequence::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AEndSequence, SequenceSpeedMultiplier);
    DOREPLIFETIME(AEndSequence, AUTH_CameraState);
}


