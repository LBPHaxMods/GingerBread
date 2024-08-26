#include "RemixDroneManager.h"
#include "Net/UnrealNetwork.h"

ARemixDroneManager::ARemixDroneManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void ARemixDroneManager::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ARemixDroneManager, m_Drone);
}


