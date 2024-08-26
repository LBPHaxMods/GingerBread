#include "BonusRoomManager.h"
#include "Components/BillboardComponent.h"
#include "Components/SceneComponent.h"
#include "Net/UnrealNetwork.h"

ABonusRoomManager::ABonusRoomManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));

    this->BillboardComponent = CreateDefaultSubobject<UBillboardComponent>(TEXT("BillboardComponent"));
    this->NPCFirstPlayIntroMontage = NULL;
    this->NPCFirstPlayHalfWayMontage = NULL;
    this->NPCFirstPlayHurryUpMontage = NULL;
    this->NPCFirstPlayTimeUpMontage = NULL;
    this->HurryUpDuration = 7.00f;
    this->IntroSequenceDelay = 1.00f;
    this->TimerStartDelay = 2.00f;
    this->BonusTimerHUDComponentClass = NULL;
    this->BonusTimerHUDScreenName = TEXT("Bonus");
    this->SoundBed = NULL;
    this->SoundBedGroup = TEXT("timed_collectible");
    this->SoundBedLoopState = TEXT("Loop");
    this->SoundBedEndState = TEXT("end");
    this->ReplicatedTotalGameDuration = -1.00f;
    this->ReplicatedGameStartTimestamp = -1.00f;
    this->ReplicatedGameEndDelay = -1.00f;
    this->BillboardComponent->SetupAttachment(RootComponent);
}

void ABonusRoomManager::Server_PopupateBonusScoreList() {
}

void ABonusRoomManager::RPC_StartGameAtTimestamp_Implementation(float GameStartTimestamp, float TotalGameDuration) {
}

void ABonusRoomManager::RPC_InternalTimeUpReached_Implementation() {
}

void ABonusRoomManager::RPC_InternalHurryUpReached_Implementation() {
}

void ABonusRoomManager::RPC_InternalHalfWayReached_Implementation() {
}

void ABonusRoomManager::OnRep_ReplicatedGameStartTimestamp() {
}

void ABonusRoomManager::OnIntroCutsceneStarted() {
}

void ABonusRoomManager::OnHUDEndSequenceFinished() {
}

void ABonusRoomManager::OnCutsceneManagerAvailable(AActor* pManagerActor) {
}

void ABonusRoomManager::NetMulticast_DisplayBonusRoomScores_Implementation(const TArray<FBonusLevelScoreData>& Scorelist) {
}

float ABonusRoomManager::GetGameTimeRemainingAsRatio() const {
    return 0.0f;
}

float ABonusRoomManager::GetGameTimeRemaining() const {
    return 0.0f;
}

TArray<FBonusLevelScoreData> ABonusRoomManager::GetBonusScoreData() const {
    return TArray<FBonusLevelScoreData>();
}

FBonusRoomTableRow ABonusRoomManager::GetBonusRoomTableRow() {
    return FBonusRoomTableRow{};
}

ABonusRoomManager* ABonusRoomManager::GetBonusRoomManager(UObject* WorldContextObject) {
    return NULL;
}

void ABonusRoomManager::EDITOR_CopyProperties(TSoftObjectPtr<AGingerbreadLevelSequenceActor> InCutsceneController, TSoftObjectPtr<ACameraArea> InCutsceneCameraArea, TSoftObjectPtr<ANPCBase> InNPC, FName InGameDataTableRowName, const TArray<TSoftObjectPtr<AActor>>& InPrizeTriggers, const TArray<TSoftObjectPtr<AActor>>& InActivateOnGameStart, const TArray<TSoftObjectPtr<AActor>>& InActivateOnHurryUp, const TArray<TSoftObjectPtr<AActor>>& InDeactivateOnHurryUp, const TArray<TSoftObjectPtr<AActor>>& InDeactivateOnTimeUp, const TArray<UAnimMontage*>& InNPCIntroMontages, const TArray<UAnimMontage*>& InNPCHalfWayMontages, const TArray<UAnimMontage*>& InNPCHurryUpMontages, const TArray<UAnimMontage*>& InNPCTimeUpMontages) {
}

void ABonusRoomManager::DisableCutsceneCameraArea() {
}

void ABonusRoomManager::AUTH_TriggerPrize() {
}

void ABonusRoomManager::AUTH_StartPrizeTimer() {
}

void ABonusRoomManager::AUTH_SkipIntroCutscene() {
}

void ABonusRoomManager::AUTH_PlayIntroMontage() {
}

void ABonusRoomManager::AUTH_OnTrackedPrizeDestroyed(AActor* pTrackedPrize) {
}

void ABonusRoomManager::AUTH_OnIntroCutsceneFinished() {
}

bool ABonusRoomManager::AreBonusScoresReady() const {
    return false;
}

void ABonusRoomManager::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ABonusRoomManager, ReplicatedTotalGameDuration);
    DOREPLIFETIME(ABonusRoomManager, ReplicatedGameStartTimestamp);
    DOREPLIFETIME(ABonusRoomManager, ReplicatedGameEndDelay);
}


