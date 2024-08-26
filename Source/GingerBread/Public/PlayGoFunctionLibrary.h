#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EInstallStateGame.h"
#include "EPlayGoDialogMode.h"
#include "NotificationResultDelegate.h"
#include "PlayGoFunctionLibrary.generated.h"

class UObject;

UCLASS(Blueprintable)
class UPlayGoFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPlayGoFunctionLibrary();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ShowDialog_BP(const UObject* WorldContextObject, EPlayGoDialogMode DialogMode, const FNotificationResult& ResultDelegate);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static EInstallStateGame GetInstallState(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool CanLaunchLevel(const UObject* WorldContextObject, const FName& LevelName);
    
};

