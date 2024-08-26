#include "Unicycle.h"
#include "AkComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "GameplayTagComponent.h"
#include "VirtualConstraintComponent.h"

AUnicycle::AUnicycle(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Capsule Component"));
    this->VirtualConstraint = CreateDefaultSubobject<UVirtualConstraintComponent>(TEXT("Virtual Constraint Component"));
    this->RollerRadius = 1.40f;
    this->SteeringClamp = 0.03f;
    this->CapsuleComponent = (UCapsuleComponent*)RootComponent;
    this->AkComponent = CreateDefaultSubobject<UAkComponent>(TEXT("AK Component"));
    this->SkeletalMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Skeletal Mesh Component"));
    this->GameplayTagComponent = CreateDefaultSubobject<UGameplayTagComponent>(TEXT("Gameplay Tag Component"));
    this->AnimInstance = NULL;
    this->AkComponent->SetupAttachment(RootComponent);
    this->SkeletalMeshComponent->SetupAttachment(RootComponent);
    this->GameplayTagComponent->SetupAttachment(RootComponent);
}


