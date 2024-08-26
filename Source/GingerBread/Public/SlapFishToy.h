#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "Launchable.h"
#include "SlapFishToy.generated.h"

class ASackboy;
class UAkAudioEvent;
class UAkComponent;
class UBoxComponent;
class UPhysicsAudioComponent;
class UPrimitiveComponent;
class USackboyToyComponent;
class USkeletalMeshComponent;
class USumoPhysicalMaterial;

UCLASS(Blueprintable)
class GINGERBREAD_API ASlapFishToy : public AActor, public ILaunchable {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* CollisionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USackboyToyComponent* ToyComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* SkeletalMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAkComponent* AkComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPhysicsAudioComponent* PhysicsAudioComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FishHandleBoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FishMidBoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FishEndBoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FishTailBoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* OnDropSFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* OnPickUpSFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* OnThrowSFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* OnWeaponSwingSFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* OnWeaponImpactBotSFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* OnWeaponImpactObjectSFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* OnSackRollStartSFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* OnSackRollEndSFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* OnSackFootDownSFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* OnSackFlutterJumpSFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* OnSackJumpSFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* OnSackRollJumpSFX;
    
public:
    ASlapFishToy(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnWeaponSwing(ASackboy* InSackboy, bool backhandSwing);
    
    UFUNCTION(BlueprintCallable)
    void OnWeaponImpact(ASackboy* InSackboy, UPrimitiveComponent* InHit, const FVector InHitPosition, const FRotator InHitRotation, const USumoPhysicalMaterial* InHitMaterial);
    
    UFUNCTION(BlueprintCallable)
    void OnThrowToyCompleted(ASackboy* InSackboy);
    
    UFUNCTION(BlueprintCallable)
    void OnThrown(ASackboy* InSackboy, const FVector InVelocity, int32 InPower);
    
    UFUNCTION(BlueprintCallable)
    void OnSackboyRollStarted(ASackboy* InSackboy);
    
    UFUNCTION(BlueprintCallable)
    void OnSackboyRollEnded(ASackboy* InSackboy);
    
    UFUNCTION(BlueprintCallable)
    void OnSackboyPickedMeUp(ASackboy* InSackboy);
    
    UFUNCTION(BlueprintCallable)
    void OnSackboyJumped(ASackboy* InSackboy, bool bFlutterJump, bool bFromRoll, bool bFromEvade, bool bFromSlap);
    
    UFUNCTION(BlueprintCallable)
    void OnSackboyFootDown(ASackboy* InSackboy, bool bRightFoot, bool isLanding, FVector InNormal, FVector InFootPos);
    
    UFUNCTION(BlueprintCallable)
    void OnSackboyDroppedMe(ASackboy* InSackboy);
    
    UFUNCTION(BlueprintCallable)
    void OnExitsCutscene(ASackboy* InSackboy);
    
    UFUNCTION(BlueprintCallable)
    void OnEntersCutscene(ASackboy* InSackboy);
    

    // Fix for true pure virtual functions not being implemented
};

