#pragma once
#include "CoreMinimal.h"
#include "RideOnVehicle.h"
#include "RideOnVehicleAmazon.generated.h"

class UAkAudioEvent;
class UAkComponent;
class UCurveFloat;
class UTimelineComponent;

UCLASS(Blueprintable)
class ARideOnVehicleAmazon : public ARideOnVehicle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BankTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* BankCurveTimelineCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTimelineComponent* BankCurveTimeline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BladePivotSpeed;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAkComponent* Ak_Boat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAkComponent* AkHaptics_Boat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* RiverAudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString HapticsRTPCMove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* StartMoveHaptics;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* StopMoveHaptics;
    
public:
    ARideOnVehicleAmazon(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void StopHeavyLanding();
    
    UFUNCTION(BlueprintCallable)
    void PostRiverEvent();
    
public:
    UFUNCTION(BlueprintCallable)
    void DoBankCurves(float RotationTime, float RotationDegrees);
    
private:
    UFUNCTION(BlueprintCallable)
    void BankCurveTimelineCallback(float Value);
    
};

