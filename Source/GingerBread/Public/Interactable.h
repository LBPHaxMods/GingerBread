#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UObject/NoExportTypes.h"
#include "FInteractionType.h"
#include "Interactable.generated.h"

class ASackboy;
class UObject;

UINTERFACE(Blueprintable)
class GINGERBREAD_API UInteractable : public UInterface {
    GENERATED_BODY()
};

class GINGERBREAD_API IInteractable : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool UpdateInteraction();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UObject* InteractionRegistration();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector GetInteractionWorldLocation();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FInteractionType GetInteractionType();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanActivate();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ActivateInteraction(ASackboy* SackboyPerformingInteraction);
    
};

