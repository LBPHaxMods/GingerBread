#include "TimedChallenge.h"
#include "Net/UnrealNetwork.h"

ATimedChallenge::ATimedChallenge(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->m_State = ETimedChallengeState::NotStarted;
    this->m_bAutoStartAfterLevelReset = false;
    this->m_TotalTimeAdjustments = 0.00f;
    this->m_TimerSpeed = 1.00f;
}

void ATimedChallenge::Start() {
}

void ATimedChallenge::SetTimerSpeed(float TimerSpeed) {
}

void ATimedChallenge::SetRewardData(const FTimedChallengeRewardData& RewardData) {
}

void ATimedChallenge::ResumeTimer() {
}

void ATimedChallenge::RESET() {
}

void ATimedChallenge::PauseTimer() {
}

void ATimedChallenge::OnRep_SyncData() {
}

void ATimedChallenge::OnRep_State() {
}

void ATimedChallenge::OnLevelResetStart(int32 ResetCount, bool AllPlayersDead) {
}

void ATimedChallenge::OnLevelResetFinish(int32 ResetCount, bool AllPlayersDead) {
}


void ATimedChallenge::Multicast_Start_Implementation() {
}

void ATimedChallenge::Multicast_SetTimerSpeed_Implementation(float TimerSpeed) {
}

void ATimedChallenge::Multicast_ResumeTimer_Implementation() {
}

void ATimedChallenge::Multicast_Reset_Implementation() {
}

void ATimedChallenge::Multicast_PauseTimer_Implementation() {
}

void ATimedChallenge::Multicast_Finish_Implementation(bool bIsPendingReset) {
}

void ATimedChallenge::Multicast_Fail_Implementation() {
}

void ATimedChallenge::Multicast_AdjustTimer_Implementation(AActor* Adjuster, float ActualTimeAdjustment, float RequestedTimeAdjustment) {
}

float ATimedChallenge::GetTimerSpeed() const {
    return 0.0f;
}

ETimedChallengeState ATimedChallenge::GetState() const {
    return ETimedChallengeState::NotStarted;
}

FTimedChallengeRewardData ATimedChallenge::GetRewardData() const {
    return FTimedChallengeRewardData{};
}

float ATimedChallenge::GetElapsedTime(bool bIgnoreAdjustments) const {
    return 0.0f;
}


void ATimedChallenge::Finish() {
}

void ATimedChallenge::Fail() {
}

bool ATimedChallenge::CanSetTimerSpeed() const {
    return false;
}

bool ATimedChallenge::CanBeReset() const {
    return false;
}

bool ATimedChallenge::CanAdjustTimer() const {
    return false;
}


void ATimedChallenge::AdjustTimer(AActor* Adjuster, float TimeAdjustment) {
}

void ATimedChallenge::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ATimedChallenge, m_State);
    DOREPLIFETIME(ATimedChallenge, m_TotalTimeAdjustments);
    DOREPLIFETIME(ATimedChallenge, m_TimerSpeed);
    DOREPLIFETIME(ATimedChallenge, m_SyncData);
}


