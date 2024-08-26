#pragma once
#include "CoreMinimal.h"
#include "CameraChangerSettings.h"
#include "CameraSettings.h"
#include "RideOnEvent.h"
#include "RideOnCameraChangerEvent.generated.h"

UCLASS(Blueprintable)
class ARideOnCameraChangerEvent : public ARideOnEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableAdaptiveCamera;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCameraChangerSettings StartCameraChangerSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCameraChangerSettings TargetCameraChangerSettings;
    
public:
    ARideOnCameraChangerEvent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetStartingCameraSettings(const FCameraSettings& Settings);
    
};

