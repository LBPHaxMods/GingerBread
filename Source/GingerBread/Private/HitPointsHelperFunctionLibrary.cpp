#include "HitPointsHelperFunctionLibrary.h"

UHitPointsHelperFunctionLibrary::UHitPointsHelperFunctionLibrary() {
}

bool UHitPointsHelperFunctionLibrary::IsWater(const FHitPointsModifierTableRow& tableRow) {
    return false;
}

bool UHitPointsHelperFunctionLibrary::IsSackboyThrownObject(const FHitPointsModifierTableRow& tableRow, bool& isHeavyObject) {
    return false;
}

bool UHitPointsHelperFunctionLibrary::IsSackboySlap(const FHitPointsModifierTableRow& tableRow) {
    return false;
}

bool UHitPointsHelperFunctionLibrary::IsDeathPlane(const FHitPointsModifierTableRow& tableRow) {
    return false;
}

bool UHitPointsHelperFunctionLibrary::IsBlastersProjectile(const FHitPointsModifierTableRow& tableRow) {
    return false;
}

bool UHitPointsHelperFunctionLibrary::IsBlastersHeadStomp(const FHitPointsModifierTableRow& tableRow) {
    return false;
}


