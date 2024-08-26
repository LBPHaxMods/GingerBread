#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UObject/NoExportTypes.h"
#include "ToyInterface.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UToyInterface : public UInterface {
    GENERATED_BODY()
};

class IToyInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetSpawnDelay() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool GetOverrideSpawnPosition(FVector& Position) const;
    
};

