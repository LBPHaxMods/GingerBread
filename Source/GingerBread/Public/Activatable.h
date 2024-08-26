#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Activatable.generated.h"

UINTERFACE(Blueprintable)
class GINGERBREAD_API UActivatable : public UInterface {
    GENERATED_BODY()
};

class GINGERBREAD_API IActivatable : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateActivatable(const bool DigitalActivation, const float AnalogueActivation, const int32 PlayerIndex);
    
};

