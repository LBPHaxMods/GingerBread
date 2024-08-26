#include "CostumePartPermission.h"

UCostumePartPermission::UCostumePartPermission() {
    this->mpNotificationComponent = NULL;
}

void UCostumePartPermission::OnCostumeThumbnailsReady(const FGingerbreadPlayerId& PlayerId) {
}

void UCostumePartPermission::OnCostumePartNoPermission(const FGingerbreadPlayerId& PlayerId, int32 HangerID, const FName& costumeName) {
}

void UCostumePartPermission::NotificationCallback(int32 iresult) {
}


