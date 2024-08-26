#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UObject/NoExportTypes.h"
#include "ECarryDropReason.h"
#include "Carryable.generated.h"

class ASackboy;
class UPrimitiveComponent;

UINTERFACE(Blueprintable)
class GINGERBREAD_API UCarryable : public UInterface {
    GENERATED_BODY()
};

class GINGERBREAD_API ICarryable : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION()
    virtual bool ShouldWaitBeforePickup() PURE_VIRTUAL(ShouldWaitBeforePickup, return false;);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnThrownBP(ASackboy* ThrownBy);
    
    UFUNCTION()
    virtual void OnThrown(ASackboy* ThrownBy) PURE_VIRTUAL(OnThrown,);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSackboyDeathBP(ASackboy* DeadSackboy);
    
    UFUNCTION()
    virtual void OnSackboyDeath(ASackboy* DeadSackboy) PURE_VIRTUAL(OnSackboyDeath,);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlaceBP(ASackboy* PlacedBy);
    
    UFUNCTION()
    virtual void OnPlace(ASackboy* PlacedBy) PURE_VIRTUAL(OnPlace,);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPickupBP(ASackboy* PickedUpBy);
    
    UFUNCTION()
    virtual void OnPickup(ASackboy* PickedUpBy) PURE_VIRTUAL(OnPickup,);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDropBP(ASackboy* DroppedBy, ECarryDropReason DropReason);
    
    UFUNCTION()
    virtual void OnDrop(ASackboy* DroppedBy, ECarryDropReason DropReason) PURE_VIRTUAL(OnDrop,);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FName GetThrowTarget();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UPrimitiveComponent* GetCarryPrimitiveBP();
    
    UFUNCTION()
    virtual UPrimitiveComponent* GetCarryPrimitive() PURE_VIRTUAL(GetCarryPrimitive, return NULL;);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool GetCarryLocalTransform(FTransform& carryTransform);
    
};

