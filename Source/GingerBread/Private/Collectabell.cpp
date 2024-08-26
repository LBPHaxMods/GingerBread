#include "Collectabell.h"
#include "Net/UnrealNetwork.h"
#include "RegistrationComponent.h"

ACollectabell::ACollectabell(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Size = ECollectabellSize::S;
    this->RegistrationComponent = CreateDefaultSubobject<URegistrationComponent>(TEXT("registration"));
}

FName ACollectabell::GetAudioSizeSwitchName() {
    return NAME_None;
}

void ACollectabell::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ACollectabell, Size);
}


