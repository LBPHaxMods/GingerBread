#include "PickupContainerComponent.h"
#include "Net/UnrealNetwork.h"

UPickupContainerComponent::UPickupContainerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->neverSpawnLives = false;
    this->neverSpawnScore = false;
    this->neverSpawnCollectabells = false;
    this->spawnLife = false;
    this->OverrideContents = EPickupContainerOverrideContent::NoOverride;
    this->score = 0;
    this->spawnScoreMultiplier = false;
    this->spawnvoidEnergy = false;
    this->NumCollectabells = 0;
    this->percentageMaxCollectabells = 1.00f;
    this->MemoryOrbInLevel = NULL;
    this->ForceScoreMultiplierAutoCollect = true;
    this->ForceLifeAutoCollect = false;
    this->SuccessiveSpawnDelay = 0.10f;
    this->bShowOrbAura = true;
    this->DustRadius = 10.00f;
    this->ParticleSysTemplate = NULL;
    this->ContainerAura_PS = NULL;
    this->bContainerAuraDestroyed = false;
    this->spawnVelocityMin = 0.00f;
    this->spawnVelocityMax = 0.00f;
    this->SpawningVelocityMin = 30.00f;
    this->SpawningVelocityMax = 50.00f;
    this->spawnVelocityHalfAngle = 5.00f;
    this->SpawnRadius = 5.00f;
    this->SpawnCollisionParameter = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;
    this->State = EPickupContainerState::Idle;
}

bool UPickupContainerComponent::WillSpawnPrizeBubble() const {
    return false;
}

bool UPickupContainerComponent::WillSpawnMemoryOrb() const {
    return false;
}

void UPickupContainerComponent::SetToyOverride(EPickupContainerOverrideContent ToyOverride) {
}

void UPickupContainerComponent::SetSpawnVoidEnergy(bool NewSpawnvoidEnergy) {
}

void UPickupContainerComponent::SetSpawnVelocityMin(float NewSpawnVelocityMin) {
}

void UPickupContainerComponent::SetSpawnVelocityMax(float NewSpawnVelocityMax) {
}

void UPickupContainerComponent::SetSpawnVelocityHalfAngle(float NewSpawnVelocityHalfAngle) {
}

void UPickupContainerComponent::SetSpawnScoreMultiplier(bool NewSpawnScoreMultiplier) {
}

void UPickupContainerComponent::SetSpawnRadius(float NewSpawnRadius) {
}

void UPickupContainerComponent::SetSpawnLife(bool NewSpawnLife) {
}

void UPickupContainerComponent::SetSpawnDirection(const FVector& NewSpawnDirection) {
}

void UPickupContainerComponent::SetSpawnBigLife(bool spawnBigLife) {
}

void UPickupContainerComponent::SetScore(int32 NewScore) {
}

void UPickupContainerComponent::SetRewardDataTableEntry(FDataTableRowHandle InRewardsDataTableEntry) {
}

void UPickupContainerComponent::SetPrizeReference(FDataTableRowHandle NewPrizeReference) {
}

void UPickupContainerComponent::SetPercentMaxCollectabells(float NewPercentageMaxCollectabells) {
}

void UPickupContainerComponent::SetNumCollectabells(int32 NewNumCollectabells) {
}

void UPickupContainerComponent::SetNeverSpawnScore(bool NewNeverSpawnScore) {
}

void UPickupContainerComponent::SetNeverSpawnLives(bool NewNeverSpawnLives) {
}

void UPickupContainerComponent::SetNeverSpawnCollectabells(bool NewNeverSpawnCollectabells) {
}

void UPickupContainerComponent::SetMemoryReference(FDataTableRowHandle MemoryReference) {
}

void UPickupContainerComponent::SetMemoryOrb(AMemoryOrb* NewMemoryOrb) {
}

void UPickupContainerComponent::ResetPickupContainer() {
}

bool UPickupContainerComponent::OpenContainerWithModifierTableRowInfo(ASackboy* Instigator, const FPickupContainerOpenWithModifierTableRowInfo& OpeningInfo, int32& OutPickupsToSpawn) {
    return false;
}

void UPickupContainerComponent::OnRep_State() {
}

void UPickupContainerComponent::OnRep_SpawnedPickups() {
}

void UPickupContainerComponent::OnRep_ContainerAuraDestroyed() {
}

void UPickupContainerComponent::OnPickupContainerManagerAvailable(AActor* ManagerActor) {
}

bool UPickupContainerComponent::HasSpawnedAllPickups() const {
    return false;
}

int32 UPickupContainerComponent::GetTotalPickupsToSpawn() const {
    return 0;
}

TArray<AActor*> UPickupContainerComponent::GetSpawnedPickups(const bool IncludeInvalidRefs) const {
    return TArray<AActor*>();
}

int32 UPickupContainerComponent::GetNumberOfSpawnedPickups() const {
    return 0;
}

void UPickupContainerComponent::ContainerOpened_Implementation(const int32 PickupsToSpawn) {
}

bool UPickupContainerComponent::CanSpawnContents() const {
    return false;
}

void UPickupContainerComponent::ApplyVelocity(AActor* toImpulse, const FVector& LaunchVelocity, bool AddToCurrent) {
}

void UPickupContainerComponent::ApplyImpulse(AActor* toImpulse, const FVector& LaunchImpulse) {
}

void UPickupContainerComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPickupContainerComponent, bContainerAuraDestroyed);
    DOREPLIFETIME(UPickupContainerComponent, SpawnedPickups);
    DOREPLIFETIME(UPickupContainerComponent, State);
}


