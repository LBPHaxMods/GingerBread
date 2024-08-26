#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "WakeSleep.generated.h"

UINTERFACE(Blueprintable)
class GINGERBREAD_API UWakeSleep : public UInterface {
    GENERATED_BODY()
};

class GINGERBREAD_API IWakeSleep : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnWake();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnSleep();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnFirstWake();
    
};

