#pragma once
#include "CoreMinimal.h"
#include "DLCResult.generated.h"

UENUM(BlueprintType)
enum class DLCResult : uint8 {
    Unknown,
    UpdateSuccess,
    UpdateFailure,
    UpdateEmpty,
    PurchaseCanceled,
    PurchaseFirst = PurchaseCanceled,
    PurchaseDeferred,
    PurchaseFailed,
    PurchaseInvalid,
    PurchaseNotAllowed,
    PurchaseNotStarted,
    PurchaseProcessing,
    PurchaseSuceeded,
    PurchaseRestored,
    PurchaseNoCart,
    PurchaseBadCart,
    PurchaseLast = PurchaseBadCart,
    MaxResult,
};

