#include "StickerDrop.h"
#include "CableComponent.h"
#include "PhysicsEngine/PhysicsConstraintComponent.h"
#include "Components/SceneComponent.h"
#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"
#include "HitPointsComponent.h"
#include "InteractionComponent.h"
#include "TriggerActorComponent.h"

AStickerDrop::AStickerDrop(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultSceneRoot"));

    this->DefaultSceneRoot = (USceneComponent*)RootComponent;
    this->Sphere = CreateDefaultSubobject<USphereComponent>(TEXT("Sphere"));
    this->PhysicsConstraint = CreateDefaultSubobject<UPhysicsConstraintComponent>(TEXT("PhysicsConstraint"));
    this->Cable = CreateDefaultSubobject<UCableComponent>(TEXT("Cable"));
    this->Sticker = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Sticker"));
    this->HitPoints = CreateDefaultSubobject<UHitPointsComponent>(TEXT("HitPoints"));
    this->Interaction = CreateDefaultSubobject<UInteractionComponent>(TEXT("Interaction"));
    this->TriggerActor = CreateDefaultSubobject<UTriggerActorComponent>(TEXT("TriggerActor"));
    this->StickerMesh = NULL;
    this->stringLength = 2300.00f;
    this->HitPointImpulseMagnitude = 2.00f;
    this->Sticker->SetupAttachment(RootComponent);
    this->HitPoints->SetupAttachment(RootComponent);
    this->Interaction->SetupAttachment(RootComponent);
    this->Sphere->SetupAttachment(RootComponent);
    this->PhysicsConstraint->SetupAttachment(Sphere);
    this->Cable->SetupAttachment(Sphere);
}

void AStickerDrop::TriggerDrop() {
}

void AStickerDrop::EDITOR_SetupFromBlutility(UStaticMesh* NewStickerMesh, const float NewStringLength, UStaticMesh* stickerStaticMesh, const FTransform& stickerRelativeTransform) {
}


