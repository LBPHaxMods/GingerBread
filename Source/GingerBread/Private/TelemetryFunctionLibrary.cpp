#include "TelemetryFunctionLibrary.h"

UTelemetryFunctionLibrary::UTelemetryFunctionLibrary() {
}

void UTelemetryFunctionLibrary::TelemetryPostShopPurchase(const FGingerbreadPlayerId& reported_player, const FName& item_id, const FName& item_type, int32 collectabells, const UObject* WorldContextObject) {
}

void UTelemetryFunctionLibrary::TelemetryOnStartCostumeShopSession(const UObject* WorldContextObject) {
}

void UTelemetryFunctionLibrary::TelemetryOnQuickSelectMenuAction(const FString& Action, const UObject* WorldContextObject) {
}

void UTelemetryFunctionLibrary::TelemetryOnExitCostumeShop(const FGingerbreadPlayerId& reported_player, const UObject* WorldContextObject) {
}

void UTelemetryFunctionLibrary::TelemetryOnEnterCostumeShop(const FGingerbreadPlayerId& reported_player, const UObject* WorldContextObject) {
}

void UTelemetryFunctionLibrary::TelemetryOnEndCostumeShopSession(const UObject* WorldContextObject) {
}

void UTelemetryFunctionLibrary::SetLevelEndOutcomeEx(const FString& Outcome, int32 score, int32 duration_seconds, const FTimespan& adjusted_time_ms, bool Complete, const UObject* WorldContextObject) {
}

void UTelemetryFunctionLibrary::SetLevelEndOutcome(const FString& Outcome, int32 score, int32 duration_seconds, bool Complete, const UObject* WorldContextObject) {
}


