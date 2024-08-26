#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "FlaglineUsable.generated.h"

class AFlaglineBase;

UINTERFACE(Blueprintable, MinimalAPI)
class UFlaglineUsable : public UInterface {
    GENERATED_BODY()
};

class IFlaglineUsable : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnExitFlaglineArea(AFlaglineBase* flagline);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnEnterFlaglineArea(AFlaglineBase* flagline);
    
};

