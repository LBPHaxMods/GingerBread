#include "GruntyBaseShield.h"
#include "Components/BoxComponent.h"
#include "Components/StaticMeshComponent.h"
#include "AttackFlashComponent.h"
#include "GameplayTagComponent.h"
#include "HitPointsModifierComponent.h"

AGruntyBaseShield::AGruntyBaseShield(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("Collision_Center"));
    this->Collision_Center = (UBoxComponent*)RootComponent;
    this->ShieldMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShieldMesh"));
    this->Collision_Right = CreateDefaultSubobject<UBoxComponent>(TEXT("Collision_Right"));
    this->Collision_Left = CreateDefaultSubobject<UBoxComponent>(TEXT("Collision_Left"));
    this->Collision_Center_Front = CreateDefaultSubobject<UBoxComponent>(TEXT("Collision_Center_Front"));
    this->GameplayTag = CreateDefaultSubobject<UGameplayTagComponent>(TEXT("GameplayTag"));
    this->AttackFlash = CreateDefaultSubobject<UAttackFlashComponent>(TEXT("AttackFlash"));
    this->HitPointsModifier = CreateDefaultSubobject<UHitPointsModifierComponent>(TEXT("HitPointsModifier"));
    this->GameplayTag->SetupAttachment(RootComponent);
    this->ShieldMesh->SetupAttachment(RootComponent);
    this->Collision_Right->SetupAttachment(RootComponent);
    this->Collision_Left->SetupAttachment(RootComponent);
    this->Collision_Center_Front->SetupAttachment(RootComponent);
}


