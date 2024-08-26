#include "MeanieMinibossArenaRingManager.h"
#include "Components/SceneComponent.h"
#include "CSPHelperComponent.h"
#include "Net/UnrealNetwork.h"

AMeanieMinibossArenaRingManager::AMeanieMinibossArenaRingManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
    this->SceneRoot = (USceneComponent*)RootComponent;
    this->CSPHelperComponent = CreateDefaultSubobject<UCSPHelperComponent>(TEXT("CSPHelperComponent"));
    this->InnerRingActor = NULL;
    this->OuterRingActor = NULL;
    this->PunchComponent = NULL;
}

void AMeanieMinibossArenaRingManager::StartSpin(EMeanieAttackChoice AttackType) {
}

void AMeanieMinibossArenaRingManager::SetPunchComponent(AMeanieMiniboss* MeanieMiniboss) {
}

void AMeanieMinibossArenaRingManager::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AMeanieMinibossArenaRingManager, ServerState);
    DOREPLIFETIME(AMeanieMinibossArenaRingManager, PunchComponent);
}


