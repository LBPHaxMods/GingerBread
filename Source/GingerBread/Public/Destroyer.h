#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Destroyer.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UDestroyer : public UInterface {
    GENERATED_BODY()
};

class IDestroyer : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool DestroyerDestroyActor();
    
};

