#include "StompySpace.h"
#include "Components/BoxComponent.h"
#include "EStompyConfigVariant.h"
#include "HitPointsModifierComponent.h"
#include "StompySpaceLinkComponent.h"
#include "StompySpinSpaceComponent.h"

AStompySpace::AStompySpace(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(3);
    this->StompySpinComponent = CreateDefaultSubobject<UStompySpinSpaceComponent>(TEXT("StompySpinComponent"));
    this->StompyVariant = EStompyConfigVariant::Space;
    this->UseSpinVFX = false;
    this->StompySpinSpaceComponent = (UStompySpinSpaceComponent*)StompySpinComponent;
    this->StompySpaceLinkComponent = CreateDefaultSubobject<UStompySpaceLinkComponent>(TEXT("StompySpaceLinkComponent"));
    this->StompyHeadDamageAuraCollider = CreateDefaultSubobject<UBoxComponent>(TEXT("StompyDamageAuraCollider"));
    this->StompyDamageAuraModifier = CreateDefaultSubobject<UHitPointsModifierComponent>(TEXT("StompyDamageAuraModifier"));
    this->StompyHeadDamageAuraCollider->SetupAttachment(RootComponent);
}


