#include "GingerbreadReplicatedHud_Level.h"
#include "Net/UnrealNetwork.h"

AGingerbreadReplicatedHud_Level::AGingerbreadReplicatedHud_Level(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void AGingerbreadReplicatedHud_Level::SetHostCollectedOrbs(const TArray<int32>& HostOrbs) {
}

void AGingerbreadReplicatedHud_Level::OnRep_HostReplicatedCollectedOrbs() {
}

void AGingerbreadReplicatedHud_Level::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AGingerbreadReplicatedHud_Level, HostCollectedOrbs);
}


