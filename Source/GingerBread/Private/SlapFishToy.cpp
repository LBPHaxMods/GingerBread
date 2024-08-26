#include "SlapFishToy.h"
#include "AkComponent.h"
#include "Components/BoxComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "SackboyToyComponent.h"

ASlapFishToy::ASlapFishToy(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComponent"));
    this->CollisionComponent = (UBoxComponent*)RootComponent;
    this->ToyComponent = CreateDefaultSubobject<USackboyToyComponent>(TEXT("ToyComponent"));
    this->SkeletalMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("MeshComponent"));
    this->AkComponent = CreateDefaultSubobject<UAkComponent>(TEXT("AudioComponent"));

    this->FishHandleBoneName = TEXT("SlapFish_Handle");
    this->FishMidBoneName = TEXT("SlapFish_Mid");
    this->FishEndBoneName = TEXT("SlapFish_End");
    this->FishTailBoneName = TEXT("SlapFish_Tail");
    this->OnDropSFX = NULL;
    this->OnPickUpSFX = NULL;
    this->OnThrowSFX = NULL;
    this->OnWeaponSwingSFX = NULL;
    this->OnWeaponImpactBotSFX = NULL;
    this->OnWeaponImpactObjectSFX = NULL;
    this->OnSackRollStartSFX = NULL;
    this->OnSackRollEndSFX = NULL;
    this->OnSackFootDownSFX = NULL;
    this->OnSackFlutterJumpSFX = NULL;
    this->OnSackJumpSFX = NULL;
    this->OnSackRollJumpSFX = NULL;
    this->ToyComponent->SetupAttachment(RootComponent);
    this->SkeletalMesh->SetupAttachment(RootComponent);
    this->AkComponent->SetupAttachment(RootComponent);
}

void ASlapFishToy::OnWeaponSwing(ASackboy* InSackboy, bool backhandSwing) {
}

void ASlapFishToy::OnWeaponImpact(ASackboy* InSackboy, UPrimitiveComponent* InHit, const FVector InHitPosition, const FRotator InHitRotation, const USumoPhysicalMaterial* InHitMaterial) {
}

void ASlapFishToy::OnThrowToyCompleted(ASackboy* InSackboy) {
}

void ASlapFishToy::OnThrown(ASackboy* InSackboy, const FVector InVelocity, int32 InPower) {
}

void ASlapFishToy::OnSackboyRollStarted(ASackboy* InSackboy) {
}

void ASlapFishToy::OnSackboyRollEnded(ASackboy* InSackboy) {
}

void ASlapFishToy::OnSackboyPickedMeUp(ASackboy* InSackboy) {
}

void ASlapFishToy::OnSackboyJumped(ASackboy* InSackboy, bool bFlutterJump, bool bFromRoll, bool bFromEvade, bool bFromSlap) {
}

void ASlapFishToy::OnSackboyFootDown(ASackboy* InSackboy, bool bRightFoot, bool isLanding, FVector InNormal, FVector InFootPos) {
}

void ASlapFishToy::OnSackboyDroppedMe(ASackboy* InSackboy) {
}

void ASlapFishToy::OnExitsCutscene(ASackboy* InSackboy) {
}

void ASlapFishToy::OnEntersCutscene(ASackboy* InSackboy) {
}


