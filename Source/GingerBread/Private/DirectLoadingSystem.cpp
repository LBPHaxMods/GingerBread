#include "DirectLoadingSystem.h"

UDirectLoadingSystem::UDirectLoadingSystem() {
    this->DirectLoadingActivity = NULL;
}

void UDirectLoadingSystem::OnESportAcceptTermsDialogClose(int32 OptionType) {
}

bool UDirectLoadingSystem::HasPendingDirectLoadZomZomShopActivity() {
    return false;
}

bool UDirectLoadingSystem::HasPendingDirectLoadKnightTrialsActivity() {
    return false;
}


