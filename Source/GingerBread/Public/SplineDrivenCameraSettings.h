#pragma once
#include "CoreMinimal.h"
#include "CameraSettingsSplineNode.h"
#include "EDriveCameraSettingsMode.h"
#include "ESackboyDrivenTargetMode.h"
#include "ESplineMotionMode.h"
#include "ESplinePositionDrivingMode.h"
#include "ESplineRotationMode.h"
#include "SplineDrivenCameraSettings.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct GINGERBREAD_API FSplineDrivenCameraSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* SplineActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SplineComponentTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESplinePositionDrivingMode PositionDrivingMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESackboyDrivenTargetMode SackboyDrivenTargetMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESplineRotationMode SplineRotationMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESplineMotionMode SplineMotionMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseSplineFocusPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSnapToSpawnPointOnSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ConstantSpeedSpawnDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRequiresAliveSackboys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDriveCameraSettingsMode CameraSettingsMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCameraSettingsSplineNode> CameraSettingsSplineNodes;
    
    FSplineDrivenCameraSettings();
};

