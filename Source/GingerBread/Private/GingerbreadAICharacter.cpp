#include "GingerbreadAICharacter.h"
#include "AkComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "AIConalDetectorComponent.h"
#include "AICoordinatorRegistrationComponent.h"
#include "AIHookPointKeeperComponent.h"
#include "AINavTargetHandlerComponent.h"
#include "AISlideComponent.h"
#include "AggravationComponent.h"
#include "AlertComponent.h"
#include "BBConfigComponent.h"
#include "BlastersTargetComponent.h"
#include "CSPHelperComponent.h"
#include "CraftCutterTargetComponent.h"
#include "GBCharacterMovementComponent.h"
#include "GameplayTagComponent.h"
#include "GrappleTargetComponent.h"
#include "HitPointsComponent.h"
#include "HitReactionComponent.h"
#include "Net/UnrealNetwork.h"
#include "PickupContainerComponent.h"
#include "PoIComponent.h"
#include "SackboyJumpStompTargetComponent.h"
#include "SackboySlapTargetComponent.h"
#include "SpotShadowComponent.h"
#include "SurfaceDeformationComponent.h"
#include "ThrowTargetComponent.h"

AGingerbreadAICharacter::AGingerbreadAICharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UGBCharacterMovementComponent>(TEXT("CharMoveComp"))) {
    this->Tags.AddDefaulted(1);
    this->BaseEyeXDistance = 0.00f;
    this->BaseEyeYDistance = 0.00f;
    this->IsOnScreen = false;
    this->IsCameraRelevant = false;
    this->IsCameraRelevantCooldown = 5.00f;
    this->BlockHitReaction = false;
    this->BlockNonSackboyHitReaction = false;
    this->AI_Debugging = false;
    this->SackboyAttackInstigatorTimeout = 5.00f;
    this->IsDead = false;
    this->SleepRequested = false;
    this->SpawnState = EAISpawnState::Default;
    this->LevelType = EEnemyLevelType::Standard;
    this->DeathVFX = NULL;
    this->DeathAKEvent = NULL;
    this->NeedsSpecialGroundedCheck = false;
    this->SpotShadowComponent = CreateDefaultSubobject<USpotShadowComponent>(TEXT("SpotShadowComponent"));
    const FProperty* p_Mesh_Parent = GetClass()->FindPropertyByName("Mesh");
    this->PoIComponent = CreateDefaultSubobject<UPoIComponent>(TEXT("PoIComponent"));
    this->AkComponent = CreateDefaultSubobject<UAkComponent>(TEXT("AkComponent"));
    this->CraftCutterTargetComponent = CreateDefaultSubobject<UCraftCutterTargetComponent>(TEXT("CraftCutterTargetComponent"));
    this->GrappleTargetComponent = CreateDefaultSubobject<UGrappleTargetComponent>(TEXT("GrappleTargetComponent"));
    this->BlastersTargetComponent = CreateDefaultSubobject<UBlastersTargetComponent>(TEXT("BlastersTargetComponent"));
    this->SackboyJumpStompTarget = CreateDefaultSubobject<USackboyJumpStompTargetComponent>(TEXT("SackboyJumpStompTarget"));
    this->ThrowTarget = CreateDefaultSubobject<UThrowTargetComponent>(TEXT("ThrowTarget"));
    this->SackboySlapTarget = CreateDefaultSubobject<USackboySlapTargetComponent>(TEXT("SackboySlapTarget"));
    this->GameplayTagComponent = CreateDefaultSubobject<UGameplayTagComponent>(TEXT("GameplayTagComponent"));
    this->AICoordinationRegistration = CreateDefaultSubobject<UAICoordinatorRegistrationComponent>(TEXT("AICoordinationRegistration"));
    this->ConalDetectorComponent = CreateDefaultSubobject<UAIConalDetectorComponent>(TEXT("ConalDetectorComponent"));
    this->BBConfigComponent = CreateDefaultSubobject<UBBConfigComponent>(TEXT("BBConfigComponent"));
    this->HitReactionComponent_RENAME_ME_AGAIN = CreateDefaultSubobject<UHitReactionComponent>(TEXT("HitReactionComponent_RENAME_ME"));
    this->AlertComponent = CreateDefaultSubobject<UAlertComponent>(TEXT("AlertComponent"));
    this->HitPointsComponent = CreateDefaultSubobject<UHitPointsComponent>(TEXT("HitPointsComponent"));
    this->AggravationComponent = CreateDefaultSubobject<UAggravationComponent>(TEXT("AggravationComponent"));
    this->HookPointKeeperComponent = CreateDefaultSubobject<UAIHookPointKeeperComponent>(TEXT("HookPointKeeperComponent"));
    this->SurfaceDeformationComponent = CreateDefaultSubobject<USurfaceDeformationComponent>(TEXT("SurfaceDeformationComponnt"));
    this->NavTargetHandlerComponent = CreateDefaultSubobject<UAINavTargetHandlerComponent>(TEXT("NavTargetHandlerComponent"));
    this->PickupContainerComponent = CreateDefaultSubobject<UPickupContainerComponent>(TEXT("PickupContainerComponent"));
    this->SlideComponent = CreateDefaultSubobject<UAISlideComponent>(TEXT("SlideComponent"));
    this->CSPHelperComponent = CreateDefaultSubobject<UCSPHelperComponent>(TEXT("CSPHelperComponent"));
    this->Rep_StoredTurningAngle = 0.00f;
    this->PoIComponent->SetupAttachment(RootComponent);
    this->AkComponent->SetupAttachment(RootComponent);
    this->CraftCutterTargetComponent->SetupAttachment(RootComponent);
    this->GrappleTargetComponent->SetupAttachment(RootComponent);
    this->BlastersTargetComponent->SetupAttachment(RootComponent);
    this->SackboyJumpStompTarget->SetupAttachment(RootComponent);
    this->ThrowTarget->SetupAttachment(RootComponent);
    this->SackboySlapTarget->SetupAttachment(RootComponent);
    this->GameplayTagComponent->SetupAttachment(RootComponent);
    this->HitPointsComponent->SetupAttachment(RootComponent);
    this->PickupContainerComponent->SetupAttachment(RootComponent);
}

void AGingerbreadAICharacter::UpdateHitPointsResponse(const FDataTableRowHandle& Row) {
}

void AGingerbreadAICharacter::ToggleActiveComponents(bool State) {
}

void AGingerbreadAICharacter::StartHitReaction(FVector ImpactNormal, AActor* attacker, FName HitReactionName, bool clientOwnsHit) {
}

void AGingerbreadAICharacter::StartCelebration() {
}

void AGingerbreadAICharacter::SetSkeletonActive(bool State) {
}

void AGingerbreadAICharacter::SetDetectionFlags() {
}

void AGingerbreadAICharacter::SetCorporeal(bool isCorporeal, bool AIEnabled) {
}

void AGingerbreadAICharacter::SetBlackboardValueAsVector(const FBlackboardKeySelector& Key, FVector Value) {
}

void AGingerbreadAICharacter::SetBlackboardValueAsString(const FBlackboardKeySelector& Key, const FString& Value) {
}

void AGingerbreadAICharacter::SetBlackboardValueAsRotator(const FBlackboardKeySelector& Key, FRotator Value) {
}

void AGingerbreadAICharacter::SetBlackboardValueAsObject(const FBlackboardKeySelector& Key, UObject* Value) {
}

void AGingerbreadAICharacter::SetBlackboardValueAsName(const FBlackboardKeySelector& Key, FName Value) {
}

void AGingerbreadAICharacter::SetBlackboardValueAsInt(const FBlackboardKeySelector& Key, int32 Value) {
}

void AGingerbreadAICharacter::SetBlackboardValueAsFloat(const FBlackboardKeySelector& Key, float Value) {
}

void AGingerbreadAICharacter::SetBlackboardValueAsEnum(const FBlackboardKeySelector& Key, uint8 Value) {
}

void AGingerbreadAICharacter::SetBlackboardValueAsClass(const FBlackboardKeySelector& Key, UClass* Value) {
}

void AGingerbreadAICharacter::SetBlackboardValueAsBool(const FBlackboardKeySelector& Key, bool Value) {
}

void AGingerbreadAICharacter::SetAggravationTarget(AActor* ActorTarget) {
}

void AGingerbreadAICharacter::SelfDestruct() {
}

void AGingerbreadAICharacter::RequestDeath_Delayed0() {
}

void AGingerbreadAICharacter::RequestDeath_Implementation(const bool spawnRewards, AActor* Murderer) {
}

void AGingerbreadAICharacter::Rep_Die_Implementation() {
}

void AGingerbreadAICharacter::OnSleep_Internal() {
}

void AGingerbreadAICharacter::OnRep_StoredTurningAngle() {
}

void AGingerbreadAICharacter::OnPreDeath() {
}

void AGingerbreadAICharacter::OnHitReactionStarted() {
}

void AGingerbreadAICharacter::OnHitReactionFinished(TEnumAsByte<EBTNodeResult::Type> btNodeResult) {
}

void AGingerbreadAICharacter::OnCSPFloatEvent(uint32 EventType, float Param1) {
}

void AGingerbreadAICharacter::ManageDeath_Delayed0(AActor* Murderer) {
}

void AGingerbreadAICharacter::ManageDeath_Implementation(AActor* Murderer) {
}

bool AGingerbreadAICharacter::LoadFromConfig_Implementation() {
    return false;
}

void AGingerbreadAICharacter::InitialisePatrol(AAIPatrolBase* NewPatrolObject) {
}

ASackboy* AGingerbreadAICharacter::GetSackboyFromProxy(UObject* Obj) {
    return NULL;
}

ANavigationData* AGingerbreadAICharacter::GetNavData() const {
    return NULL;
}

UGBCharacterMovementComponent* AGingerbreadAICharacter::GetGBMovementComponent() const {
    return NULL;
}

FVector AGingerbreadAICharacter::GetBlackboardValueAsVector(const FBlackboardKeySelector& Key) const {
    return FVector{};
}

FString AGingerbreadAICharacter::GetBlackboardValueAsString(const FBlackboardKeySelector& Key) const {
    return TEXT("");
}

FRotator AGingerbreadAICharacter::GetBlackboardValueAsRotator(const FBlackboardKeySelector& Key) const {
    return FRotator{};
}

UObject* AGingerbreadAICharacter::GetBlackboardValueAsObject(const FBlackboardKeySelector& Key) const {
    return NULL;
}

FName AGingerbreadAICharacter::GetBlackboardValueAsName(const FBlackboardKeySelector& Key) const {
    return NAME_None;
}

int32 AGingerbreadAICharacter::GetBlackboardValueAsInt(const FBlackboardKeySelector& Key) const {
    return 0;
}

float AGingerbreadAICharacter::GetBlackboardValueAsFloat(const FBlackboardKeySelector& Key) const {
    return 0.0f;
}

uint8 AGingerbreadAICharacter::GetBlackboardValueAsEnum(const FBlackboardKeySelector& Key) const {
    return 0;
}

UClass* AGingerbreadAICharacter::GetBlackboardValueAsClass(const FBlackboardKeySelector& Key) const {
    return NULL;
}

bool AGingerbreadAICharacter::GetBlackboardValueAsBool(const FBlackboardKeySelector& Key) const {
    return false;
}

AActor* AGingerbreadAICharacter::GetBlackboardValueAsActor(const FBlackboardKeySelector& Key) const {
    return NULL;
}

UBlackboardComponent* AGingerbreadAICharacter::GetBlackboard() const {
    return NULL;
}

UAIActionComponent* AGingerbreadAICharacter::GetActionComponent_Implementation() {
    return NULL;
}

void AGingerbreadAICharacter::FadeToBlackEvent(USpawnPointComponent* spawn_point) {
}

void AGingerbreadAICharacter::ExitExternalManipulationMode_Implementation(EAIExternalManipulationReason reason) {
}

void AGingerbreadAICharacter::EnterExternalManipulationMode_Implementation(EAIExternalManipulationReason reason) {
}

void AGingerbreadAICharacter::EjectFromContainer(AActor* attacker, FVector ImpactNormal) {
}

void AGingerbreadAICharacter::DisableCollisionUntilOverlapEnds(UPrimitiveComponent* AICollisionComponent, UPrimitiveComponent* otherCollisionComponent, float SafeOffsetBetweenComponents) {
}

void AGingerbreadAICharacter::DisableCollisionPairPermanently(UPrimitiveComponent* colliderA, UPrimitiveComponent* colliderB) {
}

void AGingerbreadAICharacter::Die_Implementation(AActor* Murderer) {
}

void AGingerbreadAICharacter::DestroyWhileIncorporeal() {
}

void AGingerbreadAICharacter::Debug_Implementation() {
}

void AGingerbreadAICharacter::ClearBlackboardValue(const FBlackboardKeySelector& Key) {
}

void AGingerbreadAICharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AGingerbreadAICharacter, BlockHitReaction);
    DOREPLIFETIME(AGingerbreadAICharacter, BlockNonSackboyHitReaction);
    DOREPLIFETIME(AGingerbreadAICharacter, Rep_StoredTurningAngle);
}


