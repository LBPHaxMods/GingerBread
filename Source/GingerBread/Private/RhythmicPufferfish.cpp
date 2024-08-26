#include "RhythmicPufferfish.h"
#include "Components/BoxComponent.h"
#include "Components/SceneComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "GameplayTagComponent.h"
#include "HitPointsModifierComponent.h"
#include "InteractionComponent.h"
#include "PoIComponent.h"
#include "SpotShadowComponent.h"

ARhythmicPufferfish::ARhythmicPufferfish(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));

    this->CanProcessSackboyDamageOnClient = false;
    this->CollisionComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("CollisionComponent"));
    this->GameplayTagComponent = CreateDefaultSubobject<UGameplayTagComponent>(TEXT("GameplayTagComponent"));
    this->InteractionComponent = CreateDefaultSubobject<UInteractionComponent>(TEXT("InteractionComponent"));
    this->SkeletalMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMeshComponent"));
    this->PoIComponent = CreateDefaultSubobject<UPoIComponent>(TEXT("PoIComponent"));
    this->SpotShadowComponent = CreateDefaultSubobject<USpotShadowComponent>(TEXT("SpotShadowComponent"));
    this->AkComponent = NULL;
    this->HitPointsModifierComponent = CreateDefaultSubobject<UHitPointsModifierComponent>(TEXT("HitPointsModifierComponent"));
    this->SkeletalMeshComponent->SetupAttachment(RootComponent);
    this->PoIComponent->SetupAttachment(SkeletalMeshComponent);
    this->SpotShadowComponent->SetupAttachment(SkeletalMeshComponent);
    this->CollisionComponent->SetupAttachment(RootComponent);
    this->GameplayTagComponent->SetupAttachment(RootComponent);
    this->InteractionComponent->SetupAttachment(RootComponent);
}


