#include "VexAttackExplosion.h"
#include "Components/SphereComponent.h"
#include "HitPointsModifierComponent.h"
#include "InteractionComponent.h"
#include "PickupContainerComponent.h"

AVexAttackExplosion::AVexAttackExplosion(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USphereComponent>(TEXT("SphereCollision"));
    this->SphereCollision = (USphereComponent*)RootComponent;
    this->HitPointsModifier = CreateDefaultSubobject<UHitPointsModifierComponent>(TEXT("HitPointsModifier"));
    this->SphereInteract = CreateDefaultSubobject<UInteractionComponent>(TEXT("HitPointsModifierInteract"));
    this->PickupContainerComponent = CreateDefaultSubobject<UPickupContainerComponent>(TEXT("PickupContainerComponent"));
    this->LifeSpan = 0.15f;
    this->ColliderLifespan = 0.15f;
    this->ExplosionVFX = NULL;
    this->ExplosionVFXScale = 1.00f;
    this->SphereInteract->SetupAttachment(RootComponent);
    this->PickupContainerComponent->SetupAttachment(RootComponent);
}


