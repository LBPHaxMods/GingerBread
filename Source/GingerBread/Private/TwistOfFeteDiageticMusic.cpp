#include "TwistOfFeteDiageticMusic.h"
#include "Components/SceneComponent.h"
#include "Net/UnrealNetwork.h"

ATwistOfFeteDiageticMusic::ATwistOfFeteDiageticMusic(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->StartDiageticMusicEvent = NULL;
    this->FinishDiageticMusicEvent = NULL;
    this->UseDiageticMusic = true;
}

void ATwistOfFeteDiageticMusic::OnRep_UseDiageticMusic() {
}

void ATwistOfFeteDiageticMusic::AUTH_OnRhythmicTransitionCannonFired() {
}

void ATwistOfFeteDiageticMusic::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ATwistOfFeteDiageticMusic, UseDiageticMusic);
}


