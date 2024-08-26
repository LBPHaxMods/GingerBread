#include "SpinningWheel.h"
#include "AkComponent.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"
#include "GameplayTagComponent.h"
#include "RotatorComponent.h"
#include "SpinningWheelGrabbableComponent.h"

ASpinningWheel::ASpinningWheel(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));

    this->BoltMesh = NULL;
    this->CapMesh = NULL;
    this->WheelOrientation = ESpinningWheelOrientation::Normal;
    this->WheelSpeedMode = ESpinningWheelSpeed::Fast;
    this->Thickness = 1;
    this->ReverseDirection = false;
    this->CastShadow = false;
    this->DrawCap = true;
    this->DrawBolt = true;
    this->ThicknessScaleFactor = 5.00f;
    this->RotationRoot = CreateDefaultSubobject<USceneComponent>(TEXT("RotationRoot"));
    this->WheelMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("WheelMesh"));
    this->ShadowMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShadowMesh"));
    this->BoltMeshes = NULL;
    this->CapMeshes = NULL;
    this->GameplayTagComponent = CreateDefaultSubobject<UGameplayTagComponent>(TEXT("GameplayTags"));
    this->CSPRotatorComponent = CreateDefaultSubobject<URotatorComponent>(TEXT("CSPRotatingMovement"));
    this->GrabbableComponent = CreateDefaultSubobject<USpinningWheelGrabbableComponent>(TEXT("GrabbableComponent"));
    this->AudioComponent = CreateDefaultSubobject<UAkComponent>(TEXT("AudioComponent"));
    this->HapticsComponent = CreateDefaultSubobject<UAkComponent>(TEXT("HapticsComponent"));
    this->RotationRoot->SetupAttachment(RootComponent);
    this->WheelMeshComponent->SetupAttachment(RotationRoot);
    this->ShadowMeshComponent->SetupAttachment(RootComponent);
    this->GameplayTagComponent->SetupAttachment(WheelMeshComponent);
    this->AudioComponent->SetupAttachment(RootComponent);
    this->HapticsComponent->SetupAttachment(RootComponent);
}


