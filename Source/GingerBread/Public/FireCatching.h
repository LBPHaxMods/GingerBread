#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "FireCatching.generated.h"

UINTERFACE(Blueprintable)
class GINGERBREAD_API UFireCatching : public UInterface {
    GENERATED_BODY()
};

class GINGERBREAD_API IFireCatching : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetOnFire();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ExtinguishFire();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CheckIfOnFire();
    
};

