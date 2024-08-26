#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "ESackboyWeaponType.h"
#include "SackboyWeaponBase.generated.h"

class ASackboy;
class UPrimitiveComponent;
class USumoPhysicalMaterial;

UCLASS(Blueprintable)
class ASackboyWeaponBase : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASackboy* Carrier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ThrowSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ThrowUpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASackboy* Thrower;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector throwVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESackboyWeaponType WeaponType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* HoldPrimitive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName HoldSocket;
    
public:
    ASackboyWeaponBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnWeaponImpact(ASackboy* Sackboy, UPrimitiveComponent* hitThis, const FVector& hitPosition, const FRotator& hitRotation, const USumoPhysicalMaterial* hitMaterial);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSackboyWantsToThrowMe(ASackboy* Sackboy, FVector Velocity, int32 throwPower);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSackboyUpdate(ASackboy* Sackboy);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSackboySwingWeapon(ASackboy* Sackboy);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSackboySpawns(ASackboy* Sackboy);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSackboyRollStop(ASackboy* Sackboy);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSackboyRollStart(ASackboy* Sackboy);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSackboyPickedMeUp(ASackboy* Sackboy);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSackboyJumps(ASackboy* Sackboy, bool isFlutterJump, bool isfromRoll, bool isFromEvade, bool isFromSlap);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSackboyFootDown(ASackboy* Sackboy, bool isRightFoot, bool isLanding, const FVector Normal, const FVector footPos);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSackboyDroppedMe(ASackboy* Sackboy);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSackboyDies(ASackboy* Sackboy);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBeingHeld() const;
    
};

