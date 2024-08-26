#include "HandheldFlareToy.h"
#include "AkComponent.h"
#include "Components/CapsuleComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Net/UnrealNetwork.h"
#include "SackboyToyComponent.h"

AHandheldFlareToy::AHandheldFlareToy(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<UCapsuleComponent>(TEXT("RootCapsule"));
    this->CapsuleCollider = (UCapsuleComponent*)RootComponent;
    this->ToyComponent = CreateDefaultSubobject<USackboyToyComponent>(TEXT("ToyComponent"));
    this->MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("FlareMesh"));
    this->FlareParticleEmitter = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("FlareParticleEmitter"));
    this->AudioComponent = CreateDefaultSubobject<UAkComponent>(TEXT("AK_HandheldFlareToy"));
    this->EmitterColorParameter = TEXT("VFX_Colour");
    this->TimeToDestroy = 5.00f;
    this->StopTimeOnParticles = 1.50f;
    this->UseSackboyColor = true;
    this->OnPickUpAudioEvent = NULL;
    this->OnDroppedAudioEvent = NULL;
    this->ParticlesEnabled = false;
    this->ToyComponent->SetupAttachment(RootComponent);
    this->MeshComponent->SetupAttachment(RootComponent);
    this->FlareParticleEmitter->SetupAttachment(RootComponent);
}

void AHandheldFlareToy::SetFlareEmitterColor(const FLinearColor& Color) {
}

void AHandheldFlareToy::OnRep_ParticlesEnabled() {
}

void AHandheldFlareToy::OnRep_ParticleColour() {
}



void AHandheldFlareToy::FlareThrown(ASackboy* InSackboy, FVector throwVelocity, int32 throwPower) {
}

void AHandheldFlareToy::FlarePickedUp(ASackboy* InSackboy) {
}

void AHandheldFlareToy::FlareDropped(ASackboy* InSackboy) {
}

void AHandheldFlareToy::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AHandheldFlareToy, ParticlesEnabled);
    DOREPLIFETIME(AHandheldFlareToy, ParticleColour);
}


