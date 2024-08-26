#include "GameplayLevelDataStore.h"
#include "Templates/SubclassOf.h"

UGameplayLevelDataStore::UGameplayLevelDataStore() {
}

bool UGameplayLevelDataStore::RemoveData(const FName& DataName) {
    return false;
}

UGameplayLevelDataStore* UGameplayLevelDataStore::GetInstance(const UObject* WorldContextObject) {
    return NULL;
}

ULevelDataBase* UGameplayLevelDataStore::GetData(const FName& DataName) {
    return NULL;
}

bool UGameplayLevelDataStore::DoesDataExist(const FName& DataName) {
    return false;
}

bool UGameplayLevelDataStore::AddData(const FName& DataName, const TSubclassOf<ULevelDataBase> dataType) {
    return false;
}


