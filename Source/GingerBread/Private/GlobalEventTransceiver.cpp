#include "GlobalEventTransceiver.h"

UGlobalEventTransceiver::UGlobalEventTransceiver(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TransmitterTag = TEXT("GlobalEvent");
    this->ReceiverTag = TEXT("GlobalEvent");
}

void UGlobalEventTransceiver::TransmitEvent() {
}


