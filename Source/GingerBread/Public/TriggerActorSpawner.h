#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "TriggerActorSpawner.generated.h"

UINTERFACE(Blueprintable)
class GINGERBREAD_API UTriggerActorSpawner : public UInterface {
    GENERATED_BODY()
};

class GINGERBREAD_API ITriggerActorSpawner : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UnregisterSpawnedObjects();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RegisterSpawnedObjects();
    
};

