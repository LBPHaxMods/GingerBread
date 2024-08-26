#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "LevelObjectHapticsRow.h"
#include "HapticsOverridable.generated.h"

UINTERFACE(Blueprintable)
class GINGERBREAD_API UHapticsOverridable : public UInterface {
    GENERATED_BODY()
};

class GINGERBREAD_API IHapticsOverridable : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool GetCurrentHapticsOverride(FLevelObjectHapticsRow& OutLevelObjectHaptics);
    
};

