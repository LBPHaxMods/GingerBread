#include "GlassIcicle.h"
#include "CableComponent.h"
#include "PhysicsEngine/PhysicsConstraintComponent.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"
#include "GameplayTagComponent.h"
#include "TriggerActorComponent.h"

AGlassIcicle::AGlassIcicle(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
    this->SceneComponent = (USceneComponent*)RootComponent;
    this->IcicleMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("IcicleMeshComponent"));
    this->CableComponent = CreateDefaultSubobject<UCableComponent>(TEXT("CableComponent"));
    this->GameplayTagComponent = CreateDefaultSubobject<UGameplayTagComponent>(TEXT("GameplayTagComponent"));
    this->PhysicsConstraintComponent = CreateDefaultSubobject<UPhysicsConstraintComponent>(TEXT("PhysicsConstraintComponent"));
    this->TriggerActorComponent = CreateDefaultSubobject<UTriggerActorComponent>(TEXT("TriggerActorComponent"));
    this->ShowCable = true;
    this->InitialLinearImpulse = 0.05f;
    this->InitialTorque = 0.50f;
    this->LinearLimit = 0.00f;
    this->SlappingSackboyFacingWeight = 0.75f;
    this->SlapLinearImpulse = 1.00f;
    this->IcicleMeshComponent->SetupAttachment(RootComponent);
    this->CableComponent->SetupAttachment(IcicleMeshComponent);
    this->GameplayTagComponent->SetupAttachment(IcicleMeshComponent);
    this->PhysicsConstraintComponent->SetupAttachment(RootComponent);
}

void AGlassIcicle::EDITOR_CopyProperties(AActor* BlueprintActor) {
}


