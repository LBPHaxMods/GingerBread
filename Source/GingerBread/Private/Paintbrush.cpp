#include "Paintbrush.h"
#include "AkComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "GameplayTagComponent.h"
#include "SackboyToyComponent.h"

APaintbrush::APaintbrush(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<UCapsuleComponent>(TEXT("CapsuleComponent"));
    this->CapsuleComponent = (UCapsuleComponent*)RootComponent;
    this->ToyComponent = CreateDefaultSubobject<USackboyToyComponent>(TEXT("ToyComponent"));
    this->SkeletalMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("MeshComponent"));
    this->AkComponent = CreateDefaultSubobject<UAkComponent>(TEXT("AK Component"));
    this->GameplayTagComponent = CreateDefaultSubobject<UGameplayTagComponent>(TEXT("Gameplay Tag Component"));

    this->SwingForehandEffect = NULL;
    this->SwingBackhandEffect = NULL;
    this->SuperSlapPaintEffect = NULL;
    this->VFXColorParamName = TEXT("Colour");
    this->MaterialColorParamName = TEXT("Albedo Tint");
    this->DropPaintBrushSFX = NULL;
    this->ThrowPaintBrushSFX = NULL;
    this->PickUpPaintBrushSFX = NULL;
    this->RegularSlapSFX = NULL;
    this->SuperSlapStartSFX = NULL;
    this->SuperSlapEndSFX = NULL;
    this->FlutterJumpSFX = NULL;
    this->FlutterJumpEndSFX = NULL;
    this->WalkingSFX = NULL;
    this->RollStartSFX = NULL;
    this->RollEndSFX = NULL;
    this->RollEvadeSFX = NULL;
    this->DownwardStrikeSFX = NULL;
    this->DownwardStrikeImpactSFX = NULL;
    this->ToyComponent->SetupAttachment(RootComponent);
    this->SkeletalMesh->SetupAttachment(RootComponent);
    this->AkComponent->SetupAttachment(RootComponent);
    this->GameplayTagComponent->SetupAttachment(RootComponent);
}

void APaintbrush::UpdateBrushColor_Implementation(const FLinearColor& NewColor) {
}

void APaintbrush::OnThrowToyCompleted(ASackboy* InSackboy) {
}

void APaintbrush::OnThrowToy(ASackboy* theSackboy, const FVector throwVelocity, int32 throwPower) {
}

void APaintbrush::OnSwingToy(ASackboy* InSackboy, bool backhandSwing) {
}

void APaintbrush::OnSuperSlapStopped(ASackboy* InSackboy, bool interrupted) {
}

void APaintbrush::OnSuperSlapStarted(ASackboy* InSackboy, bool backhandSwing) {
}

void APaintbrush::OnSackboyStartedFlutterJump(ASackboy* InSackboy) {
}

void APaintbrush::OnSackboyRollStart(ASackboy* InSackboy) {
}

void APaintbrush::OnSackboyRollEvade(ASackboy* InSackboy) {
}

void APaintbrush::OnSackboyRollEnd(ASackboy* InSackboy) {
}

void APaintbrush::OnSackboyFootDown(ASackboy* Sackboy, bool isRightFoot, bool isLanding, FVector footNormal, FVector footPos) {
}

void APaintbrush::OnSackboyEndedFlutterJump(ASackboy* InSackboy) {
}

void APaintbrush::OnSackboyDownwardStrikeImpact(ASackboy* InSackboy) {
}

void APaintbrush::OnSackboyDownwardStrike(ASackboy* InSackboy) {
}

void APaintbrush::OnPickedUp(ASackboy* theSackboy) {
}

void APaintbrush::OnDropped(ASackboy* theSackboy) {
}


