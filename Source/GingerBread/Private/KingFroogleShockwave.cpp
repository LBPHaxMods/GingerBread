#include "KingFroogleShockwave.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"
#include "HitPointsModifierComponent.h"
#include "InteractionComponent.h"
#include "Net/UnrealNetwork.h"
#include "NetworkEventComponent.h"

AKingFroogleShockwave::AKingFroogleShockwave(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
    this->SceneComponent = (USceneComponent*)RootComponent;
    this->ShockwaveCollider = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShockwaveCollider"));
    this->ShockwaveInteraction = CreateDefaultSubobject<UInteractionComponent>(TEXT("ShockwaveInteraction"));
    this->ShockwaveHitPointsModifier = CreateDefaultSubobject<UHitPointsModifierComponent>(TEXT("ShockwaveHitPointsModifier"));
    this->NetworkEventComponent = CreateDefaultSubobject<UNetworkEventComponent>(TEXT("NetworkEventComponent"));
    this->ExpandSpeed = 0.00f;
    this->MaxRadius = 0.00f;
    this->ShockwaveCollider->SetupAttachment(RootComponent);
    this->ShockwaveInteraction->SetupAttachment(ShockwaveCollider);
}

void AKingFroogleShockwave::OnNetworkEvent(FName EventName) {
}

void AKingFroogleShockwave::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AKingFroogleShockwave, ExpandSpeed);
    DOREPLIFETIME(AKingFroogleShockwave, MaxRadius);
    DOREPLIFETIME(AKingFroogleShockwave, ShockwaveVFXTemplate);
}


