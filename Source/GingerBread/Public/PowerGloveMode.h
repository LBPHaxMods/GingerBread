#pragma once
#include "CoreMinimal.h"
#include "ControlMode.h"
#include "PowerGloveMode.generated.h"

class ASackboy;
class UPrimitiveComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPowerGloveMode : public UControlMode {
    GENERATED_BODY()
public:
    UPowerGloveMode(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnThrow(ASackboy* Sackboy, UPrimitiveComponent* Primitive);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlace(ASackboy* Sackboy, UPrimitiveComponent* Primitive);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPickup(ASackboy* Sackboy, UPrimitiveComponent* Primitive);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDrop(ASackboy* Sackboy, UPrimitiveComponent* Primitive);
    
};

