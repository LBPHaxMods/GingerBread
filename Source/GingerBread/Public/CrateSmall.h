#pragma once
#include "CoreMinimal.h"
#include "Carryable.h"
#include "CrateBase.h"
#include "CratePickedUpDelegate.h"
#include "ECarryDropReason.h"
#include "FloatyBubbleEventReceiver.h"
#include "CrateSmall.generated.h"

class ASackboy;
class UGrappleTargetComponent;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class ACrateSmall : public ACrateBase, public ICarryable, public IFloatyBubbleEventReceiver {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCratePickedUp OnCratePickedUp;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGrappleTargetComponent* GrappleTarget;
    
public:
    ACrateSmall(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
    UFUNCTION()
    bool ShouldWaitBeforePickup() override PURE_VIRTUAL(ShouldWaitBeforePickup, return false;);
    
    UFUNCTION()
    void OnThrown(ASackboy* ThrownBy) override PURE_VIRTUAL(OnThrown,);
    
    UFUNCTION()
    void OnSackboyDeath(ASackboy* DeadSackboy) override PURE_VIRTUAL(OnSackboyDeath,);
    
    UFUNCTION()
    void OnPlace(ASackboy* PlacedBy) override PURE_VIRTUAL(OnPlace,);
    
    UFUNCTION()
    void OnPickup(ASackboy* PickedUpBy) override PURE_VIRTUAL(OnPickup,);
    
    UFUNCTION()
    void OnDrop(ASackboy* DroppedBy, ECarryDropReason DropReason) override PURE_VIRTUAL(OnDrop,);
    
    UFUNCTION()
    UPrimitiveComponent* GetCarryPrimitive() override PURE_VIRTUAL(GetCarryPrimitive, return NULL;);
    
};

