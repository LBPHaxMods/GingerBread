#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ETutorialPickupType.h"
#include "TutorialTriggerManager.generated.h"

class AActor;
class AGingerbreadGameState;
class ASackboy;

UCLASS(Blueprintable)
class GINGERBREAD_API UTutorialTriggerManager : public UObject {
    GENERATED_BODY()
public:
    UTutorialTriggerManager();

private:
    UFUNCTION(BlueprintCallable)
    void SubscribeAll(AActor* ed_actor);
    
    UFUNCTION(BlueprintCallable)
    void OnGameStateCreated(AGingerbreadGameState* State);
    
    UFUNCTION(BlueprintCallable)
    void NotifyUsePowerUp(ASackboy* SB);
    
    UFUNCTION(BlueprintCallable)
    void NotifyTilt(ASackboy* SB, float Duration);
    
    UFUNCTION(BlueprintCallable)
    void NotifyThrowCraftCutter(ASackboy* SB);
    
    UFUNCTION(BlueprintCallable)
    void NotifySlap(ASackboy* SB);
    
    UFUNCTION(BlueprintCallable)
    void NotifyRoll(ASackboy* SB, float Duration);
    
    UFUNCTION(BlueprintCallable)
    void NotifyPutDown(ASackboy* SB, float Duration);
    
    UFUNCTION(BlueprintCallable)
    void NotifyPlayerPickup(ASackboy* SB, ASackboy* picked_up_sb);
    
    UFUNCTION(BlueprintCallable)
    void NotifyPlatformDropThrough(ASackboy* SB);
    
    UFUNCTION(BlueprintCallable)
    void NotifyPickup(ASackboy* SB, ETutorialPickupType pickup_type);
    
    UFUNCTION(BlueprintCallable)
    void NotifyJump(ASackboy* SB);
    
    UFUNCTION(BlueprintCallable)
    void NotifyHover(ASackboy* SB, float Duration);
    
    UFUNCTION(BlueprintCallable)
    void NotifyHeadStomp(ASackboy* SB);
    
    UFUNCTION(BlueprintCallable)
    void NotifyGrappleAttempt(ASackboy* SB);
    
    UFUNCTION(BlueprintCallable)
    void NotifyGrappleAttach(ASackboy* SB);
    
    UFUNCTION(BlueprintCallable)
    void NotifyGrab(ASackboy* SB, float Duration);
    
    UFUNCTION(BlueprintCallable)
    void NotifyDisengageFromToy(ASackboy* SB, bool isVehicle);
    
    UFUNCTION(BlueprintCallable)
    void NotifyDisengageFromSnowball(ASackboy* SB, bool isVehicle);
    
    UFUNCTION(BlueprintCallable)
    void NotifyBouncePadJump(ASackboy* SB);
    
    UFUNCTION(BlueprintCallable)
    void NotifyBlasterFire(ASackboy* SB);
    
};

