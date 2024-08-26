#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GingerbreadPlayerId.h"
#include "TelemetryFunctionLibrary.generated.h"

class UObject;

UCLASS(Blueprintable)
class UTelemetryFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UTelemetryFunctionLibrary();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void TelemetryPostShopPurchase(const FGingerbreadPlayerId& reported_player, const FName& item_id, const FName& item_type, int32 collectabells, const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void TelemetryOnStartCostumeShopSession(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void TelemetryOnQuickSelectMenuAction(const FString& Action, const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void TelemetryOnExitCostumeShop(const FGingerbreadPlayerId& reported_player, const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void TelemetryOnEnterCostumeShop(const FGingerbreadPlayerId& reported_player, const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void TelemetryOnEndCostumeShopSession(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetLevelEndOutcomeEx(const FString& Outcome, int32 score, int32 duration_seconds, const FTimespan& adjusted_time_ms, bool Complete, const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetLevelEndOutcome(const FString& Outcome, int32 score, int32 duration_seconds, bool Complete, const UObject* WorldContextObject);
    
};

