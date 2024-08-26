#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CameraArea.h"
#include "SplineDrivenCameraSettings.h"
#include "SplineDrivenCameraArea.generated.h"

class USplineComponent;
class USplineDrivenCameraBehaviour;

UCLASS(Blueprintable)
class GINGERBREAD_API ASplineDrivenCameraArea : public ACameraArea {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USplineDrivenCameraBehaviour* SplineDrivenCameraBehaviour;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSplineDrivenCameraSettings SplineDrivenCameraSettings;
    
public:
    ASplineDrivenCameraArea(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SnapToTargetLocation();
    
    UFUNCTION(BlueprintCallable)
    void SetTargetLocation(const FVector& world_location);
    
    UFUNCTION(BlueprintCallable)
    void SetTargetDistance(float distance_along_spline);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USplineComponent* GetSpline() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDistanceAlongSpline() const;
    
};

