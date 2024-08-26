#include "GingerbreadTriggerManager.h"

AGingerbreadTriggerManager::AGingerbreadTriggerManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

bool AGingerbreadTriggerManager::IsGuidRegisteredInInitialList(const FGuid Guid) {
    return false;
}

bool AGingerbreadTriggerManager::IsGuidRegistered(const FGuid Guid) {
    return false;
}

AGingerbreadTriggerManager* AGingerbreadTriggerManager::GetInstance(UWorld* World) {
    return NULL;
}


