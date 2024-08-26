#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "EDamageDetails.h"
#include "ESackboyActivity.h"
#include "ESackboyEmotionalState.h"
#include "ESackboyHitReaction.h"
#include "ESackboyHitReactionRecovery.h"
#include "ESpawnPointType.h"
#include "HitPointContactData.h"
#include "HitPointModifyResult.h"
#include "HitPointsModifierTableRow.h"
#include "SackboyBlueprintComponent_EventReceiver.generated.h"

class AActor;
class ABlastersProjectile;
class ACollectableBase;
class ASackboy;
class ASackboyWeaponBase;
class UMaterialInterface;
class UPrimitiveComponent;
class UStaticMesh;
class USumoPhysicalMaterial;

UINTERFACE(Blueprintable)
class USackboyBlueprintComponent_EventReceiver : public UInterface {
    GENERATED_BODY()
};

class ISackboyBlueprintComponent_EventReceiver : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnVehicleHeadstompLanded(ASackboy* Sackboy, const FVector& landingPosition, const USumoPhysicalMaterial* CurrentSurface);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnToyStolen(ASackboy* Sackboy);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnToyEquip(ASackboy* Sackboy);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnToyDropped(ASackboy* Sackboy);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnToyCombatSlapHit(ASackboy* Sackboy);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnToyCombatSlap(ASackboy* Sackboy, bool usingLeftHand);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnToyCombatChargedSlap(ASackboy* Sackboy);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnTick(ASackboy* Sackboy, float delta_seconds);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnThrowObject(ASackboy* Sackboy, UPrimitiveComponent* thrownPrimitive);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnTetherSpawned(ASackboy* Sackboy);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnTakeHitReaction(ASackboy* Sackboy, const FVector& hitPosition, const FRotator& hitRotation, const ESackboyHitReaction Hit, bool isCausedByDamage, const FHitPointModifyResult& DamageResult);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnTakeDamageDueToSackboy(ASackboy* Sackboy);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnTakeDamage(ASackboy* Sackboy, const FHitPointModifyResult& Result, ESackboyHitReaction HitReaction);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnSwooshStop(ASackboy* Sackboy);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnSwooshStart(ASackboy* Sackboy, const FVector& sackboyVelocity);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnSwooshContinue(ASackboy* Sackboy, const FVector& sackboyVelocity);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnSwingStop(ASackboy* Sackboy);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnSwingStart(ASackboy* Sackboy);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnSurfaceMeshChanged(ASackboy* Sackboy, const UStaticMesh* NewSurfaceMesh, const AActor* MeshOwner);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnSurfaceChanged(ASackboy* Sackboy, const USumoPhysicalMaterial* CurrentSurface);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnSuperSlapStart(ASackboy* Sackboy, bool reversed);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnSuperSlapEnd(ASackboy* Sackboy, bool interrupted);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnStopping(ASackboy* Sackboy, bool smallStop);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnStopMovingObjectPlaceholder(ASackboy* Sackboy, UPrimitiveComponent* movingObject);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnStartMovingObjectPlaceholder(ASackboy* Sackboy, UPrimitiveComponent* movingObject, const USumoPhysicalMaterial* movingMaterial);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnStackBalanceUpdate(ASackboy* Sackboy, const int32 StackLevel, const int32 StackDepth, const float LeanForwards, const float LeanSideways, const float CollapseFraction);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnStackBalanceStop(ASackboy* Sackboy, const int32 StackLevel, const int32 StackDepth);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnStackBalanceStart(ASackboy* Sackboy, const int32 StackLevel, const int32 StackDepth);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnSpinningKick(ASackboy* Sackboy);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnSpawned(ASackboy* Sackboy, bool FromUFO);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnSlideStop(ASackboy* Sackboy);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnSlideStart(ASackboy* Sackboy);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnSlapStopCharge(ASackboy* Sackboy, bool isWearingPowergloves);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnSlapStartCharge(ASackboy* Sackboy, bool isWearingPowergloves);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnSlappedObject(ASackboy* Sackboy, UPrimitiveComponent* SlappedComponent, const FVector& hitPosition, const FRotator& hitRotation, const USumoPhysicalMaterial* PhysicalMaterial, int32 SlapLevel, EDamageDetails Details, bool didDamage);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnSlapped(ASackboy* Sackboy, ASackboy* slappingSackboy, const FVector& hitPosition, const FRotator& hitRotation, EDamageDetails Details);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnSlapExit(ASackboy* Sackboy);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnSlapChargeCancelled(ASackboy* Sackboy);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnSlap(ASackboy* Sackboy, bool usingLeftHand, EDamageDetails Details);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnSkidStop(ASackboy* Sackboy);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnSkidStart(ASackboy* Sackboy);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnSackboyStruggleEnd(ASackboy* Sackboy);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnSackboyStruggleBegin(ASackboy* Sackboy);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRollStop(ASackboy* Sackboy, ESackboyActivity next_activity, bool inSackball);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRollStompStart(ASackboy* Sackboy);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRollStompEnd(ASackboy* Sackboy);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRollStart(ASackboy* Sackboy, bool inSackball, const USumoPhysicalMaterial* CurrentSurface);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRollSmash(ASackboy* Sackboy, const FVector& SmashPos, const USumoPhysicalMaterial* PhysicalMaterial);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRollSkid(ASackboy* Sackboy);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRollRidingStart(ASackboy* Sackboy);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRollRidingJump(ASackboy* Sackboy);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRollRidingEnd(ASackboy* Sackboy);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRollEvadeStart(ASackboy* Sackboy);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRollDiveStart(ASackboy* Sackboy);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRollDaze(ASackboy* Sackboy);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRollBump(ASackboy* Sackboy);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnResetSackboy(ASackboy* Sackboy);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnReleasedObject(ASackboy* Sackboy, UPrimitiveComponent* releasedPrim);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnReleasedBySackboy(ASackboy* Sackboy, ASackboy* OtherSackboy, bool wasThrown);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnPreDespawn(ASackboy* Sackboy);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnPowerupEquip(ASackboy* Sackboy);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnPogoStickHeadStompStart();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnPogoStickHeadStompLanded();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnPogoStickEvade(bool ShortEvade);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnPogoStickBounce(bool ChargedJump);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnPlaceThread(ASackboy* Sackboy);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnPirouetteJump(ASackboy* Sackboy);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnPickUpObject(ASackboy* Sackboy, UPrimitiveComponent* heldPrimitive);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnMovingObjectPlaceholder(ASackboy* Sackboy, UPrimitiveComponent* movingObject, const FVector sackboyVelocity);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnMemoryOrbPickup(ASackboy* Sackboy);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnMegaSlapTrigger(ASackboy* Sackboy, ASackboy* OtherSackboy);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnMegaSlapThrow(ASackboy* Sackboy);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnMegaSlapStart(ASackboy* Sackboy, ASackboy* OtherSackboy);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnMegaSlapEnd(ASackboy* Sackboy, ASackboy* OtherSackboy);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnMegaSlapDid360(ASackboy* Sackboy, ASackboy* OtherSackboy);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnMegaRollTrigger(ASackboy* Sackboy, ASackboy* OtherSackboy);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnMegaBlastUpdate(ASackboy* Sackboy, float ExplosionRadius);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnMegaBlastStart(ASackboy* Sackboy, const FVector& blastLocation, float beginRadius, float Strength);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnMegaBlastEnd(ASackboy* Sackboy);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnLongUTurnStarted(ASackboy* Sackboy);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnLedgeGrabStarted(ASackboy* Sackboy);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnLedgeGrabJump(ASackboy* Sackboy);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnLedgeGrab(ASackboy* Sackboy, bool LeftHand, const USumoPhysicalMaterial* CurrentSurface);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnLaunchedOutOfCannon(ASackboy* Sackboy);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnLandFromJump(ASackboy* Sackboy, const FVector& landingPosition);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnLanded(ASackboy* Sackboy, const FVector& landingPosition, bool IsSmall, bool fromHighUp, const USumoPhysicalMaterial* CurrentSurface);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnKillEnemyFall(ASackboy* Sackboy);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnJumpToExitBadge(ASackboy* Sackboy, const float JumpDurationSeconds);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnJumpToEnterBadge(ASackboy* Sackboy, const float JumpDurationSeconds);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnJumpInitiated(ASackboy* Sackboy, bool from_roll, bool from_grabbed, bool from_swing, bool from_roll_riding);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnJumpedOffGrabwheel(ASackboy* Sackboy);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnJump(ASackboy* Sackboy, bool from_roll, bool is_second_jump, bool from_evade, bool from_slap, bool from_swing);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInvulnerabilityStop(ASackboy* Sackboy);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInvulnerabilityStart(ASackboy* Sackboy);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInstigatedEnvironmentDamage(ASackboy* Sackboy, bool causedDeath);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnHitReactionRecovery(ASackboy* Sackboy, const FHitPointsModifierTableRow& damageSource, const FHitPointContactData& ContactData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnHitReactionLanded(ASackboy* Sackboy, bool landedOnBack);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnHitReactionDamaged(ASackboy* Sackboy, const FHitPointsModifierTableRow& damageSource, const FHitPointContactData& ContactData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnHitReaction(ASackboy* Sackboy, ESackboyHitReaction Reaction, ESackboyHitReactionRecovery Recover);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnHealthRestored(ASackboy* Sackboy, bool IsSpawning);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnHeadStompLanded(ASackboy* Sackboy, AActor* stompedActor, const USumoPhysicalMaterial* stompedMaterial, bool stompedOnEnemy);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnGrappleSwingUpdate(ASackboy* Sackboy, const FVector& Velocity, float forward_speed, float forward_stick_input, float horizontal_angular_velocity, float vertical_angular_velocity);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnGrappleSwingStop(ASackboy* Sackboy);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnGrappleSwingStart(ASackboy* Sackboy, const FVector& Velocity, float forward_speed, float forward_stick_input);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnGrappleReturned(ASackboy* Sackboy, const FVector& Position);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnGrappleRangedPickupLaunch(ASackboy* Sackboy, const FVector& Location, UPrimitiveComponent* Primitive);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnGrappleRangedPickupInterrupt(ASackboy* Sackboy, const FVector& Location, UPrimitiveComponent* Primitive);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnGrappleRangedPickupCatch(ASackboy* Sackboy, const FVector& Location, UPrimitiveComponent* Primitive);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnGrappleLaunchedWithoutTarget(ASackboy* Sackboy, const FVector& launch_position, const FVector& launch_direction);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnGrappleLaunchedTowardsTarget(ASackboy* Sackboy, const FVector& launch_position, const FVector& target_position);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnGrappleLaunchedTowardsOutOfRangeTarget(ASackboy* Sackboy, UPrimitiveComponent* Primitive, const FVector& target_position);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnGrappleDetach(ASackboy* Sackboy, const FVector& Location, const FVector& Normal);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnGrappleAttachFail(ASackboy* Sackboy, const FVector& Location, const FVector& Normal);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnGrappleAttach(ASackboy* Sackboy, const FVector& Location, const FVector& Normal);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnGrabStrain(ASackboy* Sackboy);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnGrabbedObject(ASackboy* Sackboy, UPrimitiveComponent* grabbedPrim);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnGloopRollStarted(ASackboy* Sackboy);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnGloopRollEnded(ASackboy* Sackboy);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnGloopExit(ASackboy* Sackboy);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnGloopEquip(ASackboy* Sackboy);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnGloopEnter(ASackboy* Sackboy);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnFootUp(ASackboy* Sackboy, bool isRightFoot);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnFootDown(ASackboy* Sackboy, bool isRightFoot, bool isLanding, const FVector Normal, const FVector footPos, const USumoPhysicalMaterial* currentPhysicsSurface, const UMaterialInterface* currentVisualSurface);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnFlutterInitiated(ASackboy* Sackboy);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnFlutterFinished(ASackboy* Sackboy);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnFlutterFailed(ASackboy* Sackboy);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnFlipRecovery(ASackboy* Sackboy);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnFallTaunt(ASackboy* Sackboy);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnExittedEndSequence(ASackboy* Sackboy);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnExitLevelBadge(ASackboy* Sackboy);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnEnterLevelBadge(ASackboy* Sackboy);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnEnteredEndSequence(ASackboy* Sackboy, bool OnlySackInArea);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnEnteredBonusRoom(ASackboy* Sackboy, bool FirstSackboy);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnEnemiesSpawnedIn(ASackboy* Sackboy);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnEndWalk(ASackboy* Sackboy);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnEndSprint(ASackboy* Sackboy);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnEmoteStart(ASackboy* Sackboy, FName EmoteID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnEmoteEnd(ASackboy* Sackboy);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnDropObject(ASackboy* Sackboy, UPrimitiveComponent* droppedPrimitive);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnDragonPunch(ASackboy* Sackboy, bool usingLeftHand);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnDownwardStrikeStarted(ASackboy* Sackboy, AActor* Toy);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnDodgedDamage(ASackboy* Sackboy, const FHitPointModifyResult& Result);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnDeathPopped(ASackboy* Sackboy, const FHitPointsModifierTableRow& damageSource, const FHitPointContactData& ContactData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnDeathComplete(ASackboy* Sackboy);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnDeath(ASackboy* Sackboy, const FHitPointsModifierTableRow& damageSource, const FHitPointContactData& ContactData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnDamageAttemptSucceeded(ASackboy* Sackboy, const FHitPointModifyResult& Result);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnDamageAttemptFailed(ASackboy* Sackboy, const FHitPointModifyResult& Result);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnCraftCutterThrow(ASackboy* Sackboy);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnCraftCutterStartCharge(ASackboy* Sackboy);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnCraftCutterChargeCancelled(ASackboy* Sackboy);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnCombatToyThrow(ASackboy* Sackboy);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnCollectedVoidEnergy(ASackboy* Sackboy);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnCollectedTimeBonus(ASackboy* Sackboy);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnCollectedTemporaryBubble(ASackboy* Sackboy, bool collectedAll);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnCollectedScoreMultiplier(ASackboy* Sackboy);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnCollectedPaint(ASackboy* Sackboy);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnCollectedMemoryOrb(ASackboy* Sackboy);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnCollectedLegendaryCostume(ASackboy* Sackboy);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnCollectedKey(ASackboy* Sackboy);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnCollectedFullCostume(ASackboy* Sackboy);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnCollectedEmote(ASackboy* Sackboy);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnCollectedCostumePiece(ASackboy* Sackboy);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnCollectableAttracted(ASackboy* Sackboy, ACollectableBase* Collectable);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnCheckpointTrigger(ASackboy* Sackboy);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnCheckpointSpawn(ASackboy* Sackboy, const ESpawnPointType SpawnPointType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnChargedSlap(ASackboy* Sackboy, bool usingLeftHand);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnChargedCraftCutterThrow(ASackboy* Sackboy);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnChangeSecondaryActivity(ASackboy* Sackboy, ESackboyActivity previous_activity, ESackboyActivity new_activity);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnChangePrimaryActivity(ASackboy* Sackboy, ESackboyActivity previous_activity, ESackboyActivity new_activity);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnChangedEmotion(ASackboy* Sackboy, ESackboyEmotionalState newEmotion, int32 newEmotionLevel);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnCarriedBySackboy(ASackboy* Sackboy, ASackboy* OtherSackboy);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnCancelThread(ASackboy* Sackboy);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnCameraSplat(ASackboy* Sackboy);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnBouncedOnObject(ASackboy* RootSackboy, AActor* OtherActor, UPrimitiveComponent* OtherPrimitive);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnBouncedOn(ASackboy* RootSackboy, ASackboy* OtherSackboy);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnBonusRoomRelocate(ASackboy* Sackboy);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnBlastersTrailUpdate(ASackboy* Sackboy, const FVector& Position);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnBlastersTrailEnable(ASackboy* Sackboy);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnBlastersTrailDisable(ASackboy* Sackboy);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnBlastersThreePointLandingImpact(ASackboy* Sackboy);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnBlastersStartCharge(ASackboy* Sackboy);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnBlastersRollStompStop(ASackboy* Sackboy);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnBlastersRollStompStart(ASackboy* Sackboy);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnBlastersProjectileReflectedByEnemy(ASackboy* Sackboy, ABlastersProjectile* Projectile);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnBlastersProjectileImpact(ASackboy* Sackboy, ABlastersProjectile* Projectile, AActor* hit_actor, UPrimitiveComponent* hit_primitive, const USumoPhysicalMaterial* physical_material);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnBlastersProjectileExplode(ASackboy* Sackboy, ABlastersProjectile* Projectile);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnBlastersHoverWarningStop(ASackboy* Sackboy);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnBlastersHoverWarningStart(ASackboy* Sackboy);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnBlastersHoverReset(ASackboy* Sackboy);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnBlastersHoverInitiated(ASackboy* Sackboy);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnBlastersHoverFinished(ASackboy* Sackboy, float hover_duration);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnBlastersHeadStompHandVFXTrigger(ASackboy* Sackboy);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnBlastersFuelWarningEnable(ASackboy* Sackboy);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnBlastersFuelWarningDisable(ASackboy* Sackboy);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnBlastersChargeMassCarnage(ASackboy* Sackboy);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnBlastersBoostInitiated(ASackboy* Sackboy);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnBlastersBoostFinished(ASackboy* Sackboy);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnBlastersBlastLaunched(ASackboy* Sackboy, ASackboyWeaponBase* weapon);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnBlastersBlastChargeReady(ASackboy* Sackboy);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnBlastersBlastChargeInitiated(ASackboy* Sackboy);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnBlastersBlastChargeFinished(ASackboy* Sackboy);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnBeginWalk(ASackboy* Sackboy);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnBeginSprint(ASackboy* Sackboy);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnApplyGrabStrain(ASackboy* Sackboy);
    
};

