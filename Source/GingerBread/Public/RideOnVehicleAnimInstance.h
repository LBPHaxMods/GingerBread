#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "LevelObjectAnimInstance.h"
#include "RideOnVehicleAnimInstance.generated.h"

UCLASS(Abstract, Blueprintable, NonTransient)
class URideOnVehicleAnimInstance : public ULevelObjectAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsPlayingHeavyLanding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsPlayingMovement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HasReachedEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MovementSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D HeavyLandingLocation;
    
public:
    URideOnVehicleAnimInstance();

    UFUNCTION(BlueprintCallable)
    void StopHeavyLanding();
    
    UFUNCTION(BlueprintCallable)
    void SetMovementSpeed(const float InMovementSpeed);
    
    UFUNCTION(BlueprintCallable)
    void SetIsPlayingMovement(const bool InIsPlayingMovement);
    
    UFUNCTION(BlueprintCallable)
    void PlayHeavyLanding(FVector2D InHeavyLandingLocation);
    
    UFUNCTION(BlueprintCallable)
    void EndReached();
    
};

