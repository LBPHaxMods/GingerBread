#include "HitPointsComponent.h"
#include "Net/UnrealNetwork.h"

UHitPointsComponent::UHitPointsComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bNetAddressable = true;
    this->Tag = TEXT("HitPointsComponent");
    this->BoundsUpdateMode = EHitPointsBoundsUpdateMode::Radius;
    this->BoundsRadiusScale = 0.60f;
    this->DrownOffset = 0.00f;
    this->DefaultHitPoints = 2;
    this->MaximumHitPoints = 2;
    this->DamageCooldown = 0.00f;
    this->processSackboyAttacksOnClient = false;
    this->AutoAssignColliders = true;
    this->CurrentHitPoints = 0;
}

void UHitPointsComponent::UnregisterInteractionCollider(UInteractionComponent* Collider) {
}

void UHitPointsComponent::UnregisterCollider(UPrimitiveComponent* Collider) {
}

void UHitPointsComponent::SetTableEntry(const FDataTableRowHandle& Row) {
}

void UHitPointsComponent::SetProcessSackboyAttacksOnClient(bool NewProcessSackboyAttacksOnClient) {
}

void UHitPointsComponent::SetMaximumHitPoints(int32 NewMaximumHitPoints) {
}

void UHitPointsComponent::SetDefaultHitPoints(int32 NewDefaultHitPoints) {
}

void UHitPointsComponent::SetDamageCoolDownDuration(float coolDownDuration) {
}

void UHitPointsComponent::ResetHealth() {
}

void UHitPointsComponent::RegisterInteractionCollider(UInteractionComponent* Collider, bool updateCachedBounds) {
}

void UHitPointsComponent::RegisterCollider(UPrimitiveComponent* Collider, bool updateCachedBounds) {
}

void UHitPointsComponent::OnOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void UHitPointsComponent::OnOverlapBegin(UPrimitiveComponent* targetPrim, AActor* SourceActor, UPrimitiveComponent* sourcePrim, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void UHitPointsComponent::OnInteractOverlapEnd(UInteractionComponent* OverlappedComponent, AActor* SourceActor, UInteractionComponent* OtherComp) {
}

void UHitPointsComponent::OnInteractOverlapBegin(UInteractionComponent* pOverlappedComponent, AActor* SourceActor, UInteractionComponent* pOtherComponent) {
}

void UHitPointsComponent::OnHit(UPrimitiveComponent* targetPrim, AActor* SourceActor, UPrimitiveComponent* sourcePrim, FVector NormalImpulse, const FHitResult& Hit) {
}

bool UHitPointsComponent::IsInDamageCooldown() const {
    return false;
}

FDataTableRowHandle UHitPointsComponent::GetTableEntryHandle() const {
    return FDataTableRowHandle{};
}

int32 UHitPointsComponent::GetMaximumHitPoints() const {
    return 0;
}

int32 UHitPointsComponent::GetDefaultHitPoints() const {
    return 0;
}

int32 UHitPointsComponent::GetCurrentHitPoints() const {
    return 0;
}

void UHitPointsComponent::BroadcastPostModificationEvents_Implementation(const FHitPointModifyResult_Network& Packed) {
}

FHitPointModifyResult UHitPointsComponent::AttemptModificationGivenTableRow(const FDataTableRowHandle& SourceTableEntry, FHitPointContactData& ContactData) {
    return FHitPointModifyResult{};
}

FHitPointModifyResult UHitPointsComponent::AttemptModification(const FHitPointsModifierTableRow& SourceTableEntry, FHitPointContactData& ContactData) {
    return FHitPointModifyResult{};
}

void UHitPointsComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UHitPointsComponent, CurrentHitPoints);
}


