#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "Engine/DataTable.h"
#include "Engine/EngineTypes.h"
#include "SackboyVehicleBasePostPhysicsTickFunction.h"
#include "VehicleSettings.h"
#include "VehicleState.h"
#include "SackboyVehicleBase.generated.h"

class ASackboy;
class UBoxComponent;
class UInteractionComponent;
class UPrimitiveComponent;
class USceneComponent;
class USumoPhysicalMaterial;
class UVirtualConstraintComponent;

UCLASS(Blueprintable, Config=Engine)
class ASackboyVehicleBase : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* SeatNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* VehicleHitPrimitive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInteractionComponent* VehicleHitInteraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinimumSpeedToApplyDamage;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle ThrowAttackTableEntry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVirtualConstraintComponent* VirtualConstraint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShouldClearRayTransformRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> RayOffsets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> RayLengths;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CheckAheadTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SlopeAngleLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UpSlopePower;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DownSlopeSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StepDownLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StepUpLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShowRays;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistanceToEnterVehicle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShouldProcessDistanceEntering;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASackboy* Sackboy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector SteerInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVehicleSettings VehicleSettings;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSackboyVehicleBasePostPhysicsTickFunction PostPhysicsTickFunction;
    
public:
    ASackboyVehicleBase(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void SetVehicleState(VehicleState NewState);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetCollision(UPrimitiveComponent* prim);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnVehicleHitPrimitiveOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION(BlueprintCallable)
    void OnVehicleHitPrimitiveInteract(UInteractionComponent* OverlappedComp, AActor* OtherActor, UInteractionComponent* OtherComp);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnVehicleBouncedOffObject(AActor* Actor);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpdateOnGroundEffects(ASackboy* NewSackboy, const float speedFactor, const float steeringFactor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTriggerLandedEffects(ASackboy* NewSackboy);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnTriggerBoost(ASackboy* NewSackboy, bool smallBoost);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSurfaceChanged(const USumoPhysicalMaterial* CurrentSurface);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnSackboyExitVehicle(ASackboy* NewSackboy);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnSackboyEnterVehicle(ASackboy* NewSackboy);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnOvercharge(ASackboy* NewSackboy);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnJumped(ASackboy* NewSackboy);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION(BlueprintCallable)
    void OnBeginInteract(UInteractionComponent* OverlappedComp, AActor* OtherActor, UInteractionComponent* OtherComp);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOccupied() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    VehicleState GetVehicleState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ASackboy* GetSackboy() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BoostEnded(bool bBigBoost);
    
};

