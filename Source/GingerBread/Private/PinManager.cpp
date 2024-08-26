#include "PinManager.h"

UPinManager::UPinManager() {
    this->PinDataTable = NULL;
}

void UPinManager::GetPlayerPinDisplayData(const UObject* WorldContextObject, FPlayerPinDisplayData& DisplayData, bool& bFound, const FGingerbreadPlayerId& PlayerId, const FName& PinName) {
}

FName UPinManager::GetPinNameFromID(const UObject* WorldContextObject, int32 UniqueId) {
    return NAME_None;
}

UPinManager* UPinManager::GetInstance(const UObject* WorldContextObject) {
    return NULL;
}

void UPinManager::AwardPinProgressForSackboy(const ASackboy* Sackboy, const FName& PinName, int32 IncrementValue, bool RequestSave) {
}

void UPinManager::AwardPinProgress(const UObject* WorldContextObject, const FGingerbreadPlayerId& PlayerId, const FName& PinName, int32 IncrementValue, bool RequestSave) {
}


