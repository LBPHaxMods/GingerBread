#include "PeriodicRotator.h"
#include "AkComponent.h"
#include "Components/SceneComponent.h"
#include "TriggerActorComponent.h"

APeriodicRotator::APeriodicRotator(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));

    this->Ak_PeriodicRotator = CreateDefaultSubobject<UAkComponent>(TEXT("Ak_PeriodicRotator"));
    this->TriggerActor = CreateDefaultSubobject<UTriggerActorComponent>(TEXT("TriggerActor"));
    this->RotationAxis = EAxis::X;
    this->RotationAngle = 90.00f;
    this->RotationCurve = NULL;
    this->RotationTime = 1.00f;
    this->TimeBetweenRotations = 2.00f;
    this->TimeOffset = 0.00f;
    this->RotateSFX = NULL;
    this->Ak_PeriodicRotator->SetupAttachment(RootComponent);
}


