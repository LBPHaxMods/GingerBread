#include "ObjectResetManager.h"

AObjectResetManager::AObjectResetManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

bool AObjectResetManager::UnregisterObjectSpawn(int32 SpawnRegistrationID) {
    return false;
}

bool AObjectResetManager::UnregisterObject(UObject* ObjectToUnregister) {
    return false;
}

void AObjectResetManager::RESET() {
}

bool AObjectResetManager::RegisterObjectSpawn(UClass* ClassToSpawn, FObjectResetSpawnParams ObjectSpawnParams, FObjectResetActorSpawnParams ActorSpawnParams, UObjectResetCustomSpawnParams* CustomSpawnParams, int32& SpawnRegistrationID) {
    return false;
}

bool AObjectResetManager::RegisterObjectRespawn(UObject* ObjectToRespawn, EObjectRespawnType RespawnType) {
    return false;
}

bool AObjectResetManager::RegisterObjectReset(UObject* ObjectToReset) {
    return false;
}

bool AObjectResetManager::RegisterObjectDestruction(UObject* ObjectToDestroy) {
    return false;
}

bool AObjectResetManager::MakeObjectResetParams(const UObject* Object, UClass*& ClassToSpawn, FObjectResetSpawnParams& ObjectSpawnParams, FObjectResetActorSpawnParams& ActorSpawnParams) {
    return false;
}

bool AObjectResetManager::IsResetting() const {
    return false;
}

int32 AObjectResetManager::GetResetCount() const {
    return 0;
}

void AObjectResetManager::GetObjectResetManager(const UObject* WorldContextObject, AObjectResetManager*& ObjectResetManager, EObjectValidity& Out_ManagerValidity) {
}


