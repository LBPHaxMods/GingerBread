#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "SackboyYanker.generated.h"

class ASackboy;
class UObject;

UINTERFACE(Blueprintable)
class GINGERBREAD_API USackboyYanker : public UInterface {
    GENERATED_BODY()
};

class GINGERBREAD_API ISackboyYanker : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnYankTargetReached(ASackboy* YankedSackboy);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnYankOverridden(ASackboy* YankedSackboy, UObject* NewYankInstigator);
    
};

