#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "LevelObject.generated.h"

UINTERFACE(Blueprintable)
class GINGERBREAD_API ULevelObject : public UInterface {
    GENERATED_BODY()
};

class GINGERBREAD_API ILevelObject : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Trigger();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Deactivate();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Activate(bool AutoTrigger);
    
};

