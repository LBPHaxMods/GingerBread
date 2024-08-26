#include "StompySpinAOE.h"
#include "Particles/ParticleSystemComponent.h"
#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"
#include "HitPointsModifierComponent.h"
#include "InteractionComponent.h"

AStompySpinAOE::AStompySpinAOE(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USphereComponent>(TEXT("SceneRoot"));
    this->SceneRoot = (USceneComponent*)RootComponent;
    this->Cylinder = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Cylinder"));
    this->InteractionCylinder = CreateDefaultSubobject<UInteractionComponent>(TEXT("InteractionCylinder"));
    this->AttackSpingVFX = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("AttackSpingVFX"));
    this->HitPointsModifier = CreateDefaultSubobject<UHitPointsModifierComponent>(TEXT("HitPointsModifier"));
    this->Cylinder->SetupAttachment(RootComponent);
    this->InteractionCylinder->SetupAttachment(Cylinder);
    this->AttackSpingVFX->SetupAttachment(RootComponent);
}

void AStompySpinAOE::UpdateRadius_Implementation(float Radius, float Scale) {
}

void AStompySpinAOE::OnCylinderBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool FromSweep, const FHitResult& SweepResult) {
}

void AStompySpinAOE::OnCylinderBeginInteract(UInteractionComponent* OverlappedComponent, AActor* OtherActor, UInteractionComponent* OtherComp) {
}


