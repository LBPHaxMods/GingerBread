#include "CrossPlatformExportWrapper.h"

UCrossPlatformExportWrapper::UCrossPlatformExportWrapper() {
}

bool UCrossPlatformExportWrapper::TrySerializeToJSON(FString& resultJson) {
    return false;
}

bool UCrossPlatformExportWrapper::TryDeserializeFromJSON(const FString& jsonString) {
    return false;
}

FString UCrossPlatformExportWrapper::SerializeToJSON() {
    return TEXT("");
}


