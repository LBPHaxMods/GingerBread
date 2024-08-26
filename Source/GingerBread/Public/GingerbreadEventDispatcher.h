#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BlastersHitEventDelegate.h"
#include "BoomerangTouchEventDelegate.h"
#include "EPlayerJoinDirection.h"
#include "ESackboySpawnType.h"
#include "FishingRodAttachEventDelegate.h"
#include "FishingRodHitEventDelegate.h"
#include "FishingRodPullEventDelegate.h"
#include "GingerbreadManager.h"
#include "GingerbreadPlayerId.h"
#include "SackboyDeathEventDelegate.h"
#include "SackboyInteractEventDelegate.h"
#include "SackboyIntersectionEventDelegate.h"
#include "SackboySlapEventDelegate.h"
#include "SackboySpawnEventDelegate.h"
#include "SackboyStartedTouchEventDelegate.h"
#include "SackboyStoppedTouchEventDelegate.h"
#include "TutorialEventDelegate.h"
#include "TutorialPickupEventDelegate.h"
#include "TutorialPickupPlayerEventDelegate.h"
#include "TutorialPowerupEventDelegate.h"
#include "TutorialSnowballEventDelegate.h"
#include "TutorialTimeEventDelegate.h"
#include "TutorialToyEventDelegate.h"
#include "VehicleStartedTouchEventDelegate.h"
#include "VehicleStoppedTouchEventDelegate.h"
#include "GingerbreadEventDispatcher.generated.h"

class AActor;
class AGingerbreadEventDispatcher;
class ASackboy;
class UObject;
class UPrimitiveComponent;
class USpawnPointComponent;

UCLASS(Blueprintable)
class GINGERBREAD_API AGingerbreadEventDispatcher : public AGingerbreadManager {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSackboyStartedTouchEvent SackboyStartedTouchingMe;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSackboyStoppedTouchEvent SackboyStoppedTouchingMe;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSackboyIntersectionEvent SackboyEnteredMe;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSackboyIntersectionEvent SackboyExitedMe;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSackboyInteractEvent SackboyEnteredMeInteract;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSackboyInteractEvent SackboyExitedMeInteract;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSackboySlapEvent SackboySlappedMe;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFishingRodHitEvent FishingRodHitMe;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFishingRodAttachEvent FishingRodAttachedToMe;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFishingRodAttachEvent FishingRodDetachedFromMe;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFishingRodPullEvent FishingRodPulledMe;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBoomerangTouchEvent BoomerangHitMe;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlastersHitEvent BlastersHitMe;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVehicleStartedTouchEvent VehicleStartedTouchingMe;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVehicleStoppedTouchEvent VehicleStoppedTouchingMe;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTutorialEvent TutorialSlapEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTutorialEvent TutorialJumpEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTutorialEvent TutorialGrabEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTutorialEvent TutorialHeadStompEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTutorialPickupEvent TutorialPickupEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTutorialPickupPlayerEvent TutorialPickupPlayerEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTutorialTimeEvent TutorialEndPickupEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTutorialTimeEvent TutorialEndTiltPlatformEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTutorialTimeEvent TutorialEndRollEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTutorialTimeEvent TutorialEndGrabEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTutorialEvent TutorialDropThroughEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTutorialToyEvent TutorialEngageWithToyEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTutorialToyEvent TutorialDisengageWithToyEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTutorialEvent TutorialBouncePadJumpEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTutorialSnowballEvent TutorialEngageWithSnowballEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTutorialSnowballEvent TutorialDisengageWithSnowballEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTutorialPowerupEvent TutorialPowerUpChangedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTutorialEvent TutorialHoverEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTutorialTimeEvent TutorialEndHoverEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTutorialEvent TutorialBlasterFireEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTutorialEvent TutorialUsePowerUpEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTutorialEvent TutorialThrowCraftCutterEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTutorialEvent TutorialGrappleAttemptEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTutorialEvent TutorialGrappleAttachSuccessEvent;
    
protected:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSackboySpawnEvent SackboySpawned;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSackboyDeathEvent SackboyDied;
    
public:
    AGingerbreadEventDispatcher(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnPlayerJoinLeaveEvent(EPlayerJoinDirection Direction, const FGingerbreadPlayerId& player_id, bool IsForcedPlayer);
    
public:
    UFUNCTION(BlueprintCallable)
    static void NotifyTutorialEngageWithToyEvent(ASackboy* Sackboy, bool isVehicle);
    
    UFUNCTION(BlueprintCallable)
    static void NotifyTutorialEngageWithSnowballEvent(ASackboy* Sackboy, bool isVehicle);
    
    UFUNCTION(BlueprintCallable)
    static void NotifyTutorialDisengageWithToyEvent(ASackboy* Sackboy, bool isVehicle);
    
    UFUNCTION(BlueprintCallable)
    static void NotifyTutorialDisengageWithSnowballEvent(ASackboy* Sackboy, bool isVehicle);
    
    UFUNCTION(BlueprintCallable)
    void NotifyTiltPlatformEnd(ASackboy* Sackboy);
    
    UFUNCTION(BlueprintCallable)
    void NotifyTiltPlatformBegin(ASackboy* Sackboy);
    
    UFUNCTION(BlueprintCallable)
    static void NotifyBlastersHitMe_Deprecated(AActor* hit_actor, UPrimitiveComponent* hit_collider, ASackboy* Sackboy, const FVector& impact_position, const FVector& impact_normal);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static AGingerbreadEventDispatcher* GetInstance(const UObject* WorldContextObject);
    
protected:
    UFUNCTION(BlueprintCallable)
    void BroadcastSackboySpawned(ASackboy* Sackboy, TEnumAsByte<ESackboySpawnType> spawn_type, USpawnPointComponent* spawn_point);
    
    UFUNCTION(BlueprintCallable)
    void BroadcastSackboyDied(ASackboy* Sackboy);
    
};

