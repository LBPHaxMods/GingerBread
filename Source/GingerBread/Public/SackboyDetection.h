#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UObject/NoExportTypes.h"
#include "ESackboyActivity.h"
#include "ESackboyDetection.h"
#include "ESackboyDetectionDetails.h"
#include "SackboyDetection.generated.h"

class ABoomerangProjectile;
class ASackboy;
class ASackboyVehicleBase;
class UInteractionComponent;
class UPrimitiveComponent;

UINTERFACE(Blueprintable)
class GINGERBREAD_API USackboyDetection : public UInterface {
    GENERATED_BODY()
};

class GINGERBREAD_API ISackboyDetection : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool SackboyWantsToFallThroughMe(ASackboy* Sackboy, UPrimitiveComponent* Collider);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SackboyStoppedTouchingMe(ASackboy* Sackboy, UPrimitiveComponent* Collider, ESackboyDetection DetectionType, ESackboyActivity currentActivity, ESackboyDetectionDetails DetectionDetails);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SackboyStartedTouchingMe(ASackboy* Sackboy, UPrimitiveComponent* Collider, ESackboyDetection DetectionType, ESackboyActivity currentActivity, ESackboyDetectionDetails DetectionDetails, const FVector usefulVector, int32 usefulInteger);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SackboySlappedMe(ASackboy* Sackboy, UPrimitiveComponent* Collider, int32 SlapLevel, FVector slapHitLocation, bool isLeftHandSlap);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SackboyHeadExitedMe(ASackboy* Sackboy, UPrimitiveComponent* Collider);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SackboyHeadEnteredMe(ASackboy* Sackboy, UPrimitiveComponent* Collider);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SackboyExitedMeInteract(ASackboy* Sackboy, UInteractionComponent* Collider);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SackboyExitedMe(ASackboy* Sackboy, UPrimitiveComponent* Collider);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SackboyEnteredMeInteract(ASackboy* Sackboy, UInteractionComponent* Collider);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SackboyEnteredMe(ASackboy* Sackboy, UPrimitiveComponent* Collider);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnVehicleStoppedTouchingMe(ASackboyVehicleBase* Vehicle, UPrimitiveComponent* Collider, ESackboyDetection DetectionType, ESackboyDetectionDetails DetectionDetails);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnVehicleStartedTouchingMe(ASackboyVehicleBase* Vehicle, UPrimitiveComponent* Collider, ESackboyDetection DetectionType, ESackboyDetectionDetails DetectionDetails);
    
    UFUNCTION()
    virtual bool OnSackboyWantsToFallThroughMe(ASackboy* Sackboy, UPrimitiveComponent* Collider) PURE_VIRTUAL(OnSackboyWantsToFallThroughMe, return false;);
    
    UFUNCTION()
    virtual void OnSackboyStoppedTouchingMe(ASackboy* Sackboy, UPrimitiveComponent* Collider, ESackboyDetection DetectionType, ESackboyActivity currentActivity, ESackboyDetectionDetails DetectionDetails) PURE_VIRTUAL(OnSackboyStoppedTouchingMe,);
    
    UFUNCTION()
    virtual void OnSackboyStartedTouchingMe(ASackboy* Sackboy, UPrimitiveComponent* Collider, ESackboyDetection DetectionType, ESackboyActivity currentActivity, ESackboyDetectionDetails DetectionDetails, const FVector usefulVector, int32 usefulInteger) PURE_VIRTUAL(OnSackboyStartedTouchingMe,);
    
    UFUNCTION()
    virtual void OnSackboySlappedMe(ASackboy* Sackboy, UPrimitiveComponent* Collider, int32 SlapLevel, FVector slapHitLocation, bool isLeftHandSlap) PURE_VIRTUAL(OnSackboySlappedMe,);
    
    UFUNCTION()
    virtual void OnSackboyExitedMeInteract(ASackboy* Sackboy, UInteractionComponent* Collider) PURE_VIRTUAL(OnSackboyExitedMeInteract,);
    
    UFUNCTION()
    virtual void OnSackboyExitedMe(ASackboy* Sackboy, UPrimitiveComponent* Collider) PURE_VIRTUAL(OnSackboyExitedMe,);
    
    UFUNCTION()
    virtual void OnSackboyEnteredMeInteract(ASackboy* Sackboy, UInteractionComponent* Collider) PURE_VIRTUAL(OnSackboyEnteredMeInteract,);
    
    UFUNCTION()
    virtual void OnSackboyEnteredMe(ASackboy* Sackboy, UPrimitiveComponent* Collider) PURE_VIRTUAL(OnSackboyEnteredMe,);
    
    UFUNCTION()
    virtual void OnFishingRodPulledMe(ASackboy* Sackboy, UPrimitiveComponent* Collider, const FVector& Position, const FVector& Force) PURE_VIRTUAL(OnFishingRodPulledMe,);
    
    UFUNCTION()
    virtual void OnFishingRodHitMe(ASackboy* Sackboy, UPrimitiveComponent* hit_collider, const FVector& Velocity) PURE_VIRTUAL(OnFishingRodHitMe,);
    
    UFUNCTION()
    virtual void OnFishingRodDetachedFromMe(ASackboy* Sackboy, UPrimitiveComponent* hit_collider, const FVector& attach_position) PURE_VIRTUAL(OnFishingRodDetachedFromMe,);
    
    UFUNCTION()
    virtual void OnFishingRodAttachedToMe(ASackboy* Sackboy, UPrimitiveComponent* hit_collider, const FVector& attach_position) PURE_VIRTUAL(OnFishingRodAttachedToMe,);
    
    UFUNCTION()
    virtual void OnBoomerangHitMe(ASackboy* Sackboy, UPrimitiveComponent* Collider, ABoomerangProjectile* Boomerang, FVector Velocity, int32 charge_level, float boomerang_damage) PURE_VIRTUAL(OnBoomerangHitMe,);
    
    UFUNCTION()
    virtual void OnBlastersHitMe(ASackboy* Sackboy, UPrimitiveComponent* Collider, const FVector& hit_location, const FVector& hit_normal) PURE_VIRTUAL(OnBlastersHitMe,);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FishingRodPulledMe(ASackboy* Sackboy, UPrimitiveComponent* Collider, FVector Position, FVector Force);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FishingRodHitMe(ASackboy* Sackboy, UPrimitiveComponent* hit_collider, FVector Velocity);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FishingRodDetachedFromMe(ASackboy* Sackboy, UPrimitiveComponent* hit_collider, FVector attach_position);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FishingRodAttachedToMe(ASackboy* Sackboy, UPrimitiveComponent* hit_collider, FVector attach_position);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BoomerangHitMe(ASackboy* Sackboy, UPrimitiveComponent* Collider, ABoomerangProjectile* Boomerang, FVector Velocity, int32 charge_level, float boomerang_damage);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BlastersHitMe(ASackboy* Sackboy, UPrimitiveComponent* Collider, const FVector& hit_location, const FVector& hit_normal);
    
};

