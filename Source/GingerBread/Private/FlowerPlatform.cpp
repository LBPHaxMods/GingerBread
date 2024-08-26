#include "FlowerPlatform.h"
#include "AkComponent.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"
#include "GameplayTagComponent.h"
#include "Net/UnrealNetwork.h"
#include "TriggerActorComponent.h"

AFlowerPlatform::AFlowerPlatform(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));

    this->IsEnabled = true;
    this->HideQuarter1 = false;
    this->HideQuarter2 = false;
    this->HideQuarter3 = false;
    this->HideQuarter4 = false;
    this->HideStem = false;
    this->RotationSpeed = 30.00f;
    this->ReverseMovement = false;
    this->CenterCap = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CenterCap"));
    this->CenterCapMesh = NULL;
    this->Stalk = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Stalk"));
    this->StalkMeshHeight = 100.00f;
    this->StalkMaterial = NULL;
    this->Platform = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Platform"));
    this->PlatformPhysicsMesh = NULL;
    this->Rotator = NULL;
    this->GameplayTagComponent = CreateDefaultSubobject<UGameplayTagComponent>(TEXT("GameplayTagComponent"));
    this->Ak_FlowerPlatform = CreateDefaultSubobject<UAkComponent>(TEXT("Ak_FlowerPlatform"));
    this->AkRotationEvent = NULL;
    this->AudioRTPC = TEXT("flowerplatform_rotation_speed");
    this->TriggerActor = CreateDefaultSubobject<UTriggerActorComponent>(TEXT("TriggerActor"));
    this->GeneratedMesh = NULL;
    this->IsActive = true;
    this->fBaseTime = 0.00f;
    this->GameplayTagComponent->SetupAttachment(CenterCap);
    this->Ak_FlowerPlatform->SetupAttachment(RootComponent);
    this->CenterCap->SetupAttachment(RootComponent);
    this->Stalk->SetupAttachment(CenterCap);
    this->Platform->SetupAttachment(CenterCap);
}

void AFlowerPlatform::OnRep_IsEnabled() {
}

void AFlowerPlatform::OnRep_IsActive() {
}

void AFlowerPlatform::OnRep_InitialRotation() {
}

void AFlowerPlatform::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFlowerPlatform, IsEnabled);
    DOREPLIFETIME(AFlowerPlatform, IsActive);
    DOREPLIFETIME(AFlowerPlatform, ReplicatedInitialRotation);
    DOREPLIFETIME(AFlowerPlatform, fBaseTime);
}


