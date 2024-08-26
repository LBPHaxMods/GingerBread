#include "GingerbreadManager.h"
#include "Templates/SubclassOf.h"

AGingerbreadManager::AGingerbreadManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void AGingerbreadManager::GetGingerbreadManager(UObject* WorldContextObject, FLatentActionInfo LatentInfo, TSubclassOf<AGingerbreadManager> ManagerClass, bool bOnlyWithAuthority, AGingerbreadManager*& Manager, EObjectValidity& Out_ManagerValidity) {
}


