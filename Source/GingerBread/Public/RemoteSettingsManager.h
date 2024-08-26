#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "RemoteSettingsManager.generated.h"

UCLASS(Blueprintable)
class GINGERBREAD_API URemoteSettingsManager : public UObject {
    GENERATED_BODY()
public:
    URemoteSettingsManager();

private:
    UFUNCTION(BlueprintCallable)
    void OnTimer();
    
};

