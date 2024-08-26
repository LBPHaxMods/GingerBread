#include "ScoreBubbleFX.h"
#include "Components/StaticMeshComponent.h"
#include "Net/UnrealNetwork.h"

AScoreBubbleFX::AScoreBubbleFX(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent"));

    this->StaticMeshComponent = (UStaticMeshComponent*)RootComponent;
    this->MinLifetime = 0.60f;
    this->MaxLifetime = 0.80f;
    this->CollectedStandardEvent = NULL;
    this->CollectedMultipliedEvent = NULL;
    this->CollectedHapticsEvent = NULL;
    this->CollectedForceFeedbackEvent = NULL;
    this->CollectedVfx = NULL;
}

void AScoreBubbleFX::OnRep_FxProperties() {
}

void AScoreBubbleFX::OnCoolSystemAvailable(AActor* ManagerActor) {
}

void AScoreBubbleFX::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AScoreBubbleFX, Server_FxProperties);
}


