#pragma once
#include "CoreMinimal.h"
#include "InFlightDelegate.h"
#include "MovementExtender.h"
#include "OnHopDelegate.h"
#include "OnHopEndedDelegate.h"
#include "OnPrepareToHopDelegate.h"
#include "HoppingMovementExtender.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UHoppingMovementExtender : public UMovementExtender {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHop OnHop;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPrepareToHop OnPrepareToHop;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHopEnded OnHopEnded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInFlight InFlight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TotalWaitTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PrepareToHopTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HopArc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxHopMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinHopMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RotationSpeed;
    
    UHoppingMovementExtender(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UnlockMovement();
    
    UFUNCTION(BlueprintCallable)
    void RESET();
    
    UFUNCTION(BlueprintCallable)
    void PhysWalking(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void PhysFalling(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void PhysCustom(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void LockMovement();
    
};

