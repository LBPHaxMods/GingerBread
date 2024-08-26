#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ThreadInterface.generated.h"

class AThread;

UINTERFACE(Blueprintable, MinimalAPI)
class UThreadInterface : public UInterface {
    GENERATED_BODY()
};

class IThreadInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnThreadDetached(AThread* Thread);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnThreadAttached(AThread* Thread);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GetPhysicsPropertyOverrides(float& Mass, float& Bouyancy);
    
};

