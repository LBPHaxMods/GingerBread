#include "ESportsPylonNode.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"
#include "HitPointsModifierComponent.h"
#include "InteractionComponent.h"
#include "StompySpaceLinkComponent.h"
#include "TriggerActorComponent.h"

AESportsPylonNode::AESportsPylonNode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));

    this->SceneRoot = (USceneComponent*)RootComponent;
    this->PylonBody = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PylonBody"));
    this->ElectricSphere = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ElectricSphere"));
    this->SparkingEffect = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SparkingEffect"));
    this->Interaction = CreateDefaultSubobject<UInteractionComponent>(TEXT("Interaction"));
    this->StompySpaceLink = CreateDefaultSubobject<UStompySpaceLinkComponent>(TEXT("StompySpaceLink"));
    this->HitPointsModifier = CreateDefaultSubobject<UHitPointsModifierComponent>(TEXT("HitPointsModifier"));
    this->TriggerActor = CreateDefaultSubobject<UTriggerActorComponent>(TEXT("TriggerActor"));
    this->LinkInitiateDistance = 30.00f;
    this->LinkBreakDistance = 30.00f;
    this->PylonBody->SetupAttachment(RootComponent);
    this->ElectricSphere->SetupAttachment(RootComponent);
    this->SparkingEffect->SetupAttachment(RootComponent);
    this->Interaction->SetupAttachment(RootComponent);
}


