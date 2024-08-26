#include "PlayerJoinFailUIInterface.h"

UPlayerJoinFailUIInterface::UPlayerJoinFailUIInterface() {
    this->PlayerJoinManager = NULL;
}

void UPlayerJoinFailUIInterface::ShowUI_Implementation(EPlayerFailStatus FailReason, const FGingerbreadPlayerId& PlayerId, int64 BytesRequired, bool MidPlay) {
}

void UPlayerJoinFailUIInterface::SetFailResponse(const FGingerbreadPlayerId& PlayerId, bool MidPlay, EPlayerJoinFailResponse Response) {
}


