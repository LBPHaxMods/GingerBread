#include "PlayGoFunctionLibrary.h"

UPlayGoFunctionLibrary::UPlayGoFunctionLibrary() {
}

void UPlayGoFunctionLibrary::ShowDialog_BP(const UObject* WorldContextObject, EPlayGoDialogMode DialogMode, const FNotificationResult& ResultDelegate) {
}

EInstallStateGame UPlayGoFunctionLibrary::GetInstallState(const UObject* WorldContextObject) {
    return EInstallStateGame::InstallInProgress;
}

bool UPlayGoFunctionLibrary::CanLaunchLevel(const UObject* WorldContextObject, const FName& LevelName) {
    return false;
}


