#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ConfigSackboyNetworkDefaults.generated.h"

UCLASS(Blueprintable, DefaultConfig, MinimalAPI, Config=SackboyNetwork)
class UConfigSackboyNetworkDefaults : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DebugDrawFrame;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DebugDrawSackboyLabels;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DebugDrawGroupRollHoleSplineIndexAssignments;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SkipGrabInterpolationForRemoteClients;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool PreventRelease;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DebugSpinningWheelReleaseError;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DebugConveyorReleaseError;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DebugDrawSpinningWheelForward;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DebugDrawSpinningWheelRight;
    
    UConfigSackboyNetworkDefaults();

};

