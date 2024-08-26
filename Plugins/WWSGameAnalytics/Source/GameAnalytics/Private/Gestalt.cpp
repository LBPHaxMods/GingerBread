#include "Gestalt.h"

UGestalt::UGestalt() {
}

void UGestalt::PostEvent(UEventDetail* EventBody, UEventDetail* CustomData, bool IsHighPrio) {
}

UEventDetail* UGestalt::NewEvent(UObject* WorldContextObject, UClass* EventType) {
    return NULL;
}

bool UGestalt::InitTelemetry(const FString& UserId, const FString& TitleId, const FString& SessionId, const FString& Environment, const FString& BuildVersion, const FString& DeviceType, const FString& Platform, int32 PlaythroughCount, const FString& SaveId) {
    return false;
}

bool UGestalt::GetRouterInfo(FRouterInfoRetrievedDelegate Callback) {
    return false;
}


