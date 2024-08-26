#include "DestroyVolume.h"
#include "Components/BoxComponent.h"
#include "Components/StaticMeshComponent.h"
#include "HitPointsModifierComponent.h"
#include "InteractionComponent.h"

ADestroyVolume::ADestroyVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("KillVolume"));
    this->KillVolume = (UBoxComponent*)RootComponent;
    this->Visualiser = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Visualiser"));
    this->HitPointsModifier = CreateDefaultSubobject<UHitPointsModifierComponent>(TEXT("HitPointsModifier"));
    this->InteractionComponent = CreateDefaultSubobject<UInteractionComponent>(TEXT("InteractionComponent"));
    this->KillTag = TEXT("DestroyOnKillPlane");
    this->KillTag_ActorUseComponent = TEXT("UseComponentDestroyOnKillPlane");
    this->DestroyedActorLifeTime = 0.50f;
    this->OnlyAffectSackboys = false;
    this->CanProcessSackboyDamageOnClient = false;
    this->IsActive = true;
    this->IsMovable = false;
    this->EditorDebug = false;
    this->Visualiser->SetupAttachment(RootComponent);
    this->InteractionComponent->SetupAttachment(RootComponent);
}

EHitPointModifyAttemptOverride ADestroyVolume::OverrideHitPointsAttemptOnSource_Implementation(const FHitPointModifyAttempt& Attempt, int32 modificationAmount, int32& overrideModificationAmount) {
    return EHitPointModifyAttemptOverride::DoNotModify;
}

void ADestroyVolume::OnOverlapBegin(UPrimitiveComponent* targetPrim, AActor* SourceActor, UPrimitiveComponent* sourcePrim, int32 OtherBodyIndex, bool FromSweep, const FHitResult& SweepResult) {
}

void ADestroyVolume::OnInteractionBegin(UInteractionComponent* targetPrim, AActor* SourceActor, UInteractionComponent* sourcePrim) {
}

void ADestroyVolume::OnActorDestroyed(AActor* Actor) {
}


