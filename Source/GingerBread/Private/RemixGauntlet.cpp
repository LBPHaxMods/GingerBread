#include "RemixGauntlet.h"
#include "Net/UnrealNetwork.h"

ARemixGauntlet::ARemixGauntlet(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->EnemiesRemainingInWave = 0;
}

void ARemixGauntlet::RecordScore_Multicast_Implementation(FGingerbreadPlayerId sackboyID) {
}

void ARemixGauntlet::OnRep_EnemiesRemaining() {
}

void ARemixGauntlet::EnemyMurdered(AActor* Murderer, AActor* AIActor) {
}

void ARemixGauntlet::EnableEnemyCounterHud() {
}

void ARemixGauntlet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ARemixGauntlet, EnemiesRemainingInWave);
}


