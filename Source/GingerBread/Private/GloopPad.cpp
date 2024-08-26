#include "GloopPad.h"
#include "Components/BoxComponent.h"
#include "Components/StaticMeshComponent.h"
#include "InteractionComponent.h"
#include "TriggerActorComponent.h"

AGloopPad::AGloopPad(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Root"));
    this->Root = (UStaticMeshComponent*)RootComponent;
    this->Model = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Model"));
    this->TriggerBox = CreateDefaultSubobject<UBoxComponent>(TEXT("Trigger Box"));
    this->TriggerVolume = CreateDefaultSubobject<UInteractionComponent>(TEXT("TriggerVolume"));
    this->TriggerActor = CreateDefaultSubobject<UTriggerActorComponent>(TEXT("Trigger Actor"));
    this->Model->SetupAttachment(RootComponent);
    this->TriggerBox->SetupAttachment(RootComponent);
    this->TriggerVolume->SetupAttachment(RootComponent);
}


