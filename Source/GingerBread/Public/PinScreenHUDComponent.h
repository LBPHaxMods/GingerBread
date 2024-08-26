#pragma once
#include "CoreMinimal.h"
#include "GingerbreadHUDComponent.h"
#include "PinScreenHUDComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPinScreenHUDComponent : public UGingerbreadHUDComponent {
    GENERATED_BODY()
public:
    UPinScreenHUDComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void EnablePinHUD(bool Enabled);
    
};

