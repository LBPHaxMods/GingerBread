#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "BouncePadBouncer.generated.h"

class UPrimitiveComponent;

UINTERFACE(Blueprintable, MinimalAPI)
class UBouncePadBouncer : public UInterface {
    GENERATED_BODY()
};

class IBouncePadBouncer : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PreBounced(UPrimitiveComponent* component);
    
};

