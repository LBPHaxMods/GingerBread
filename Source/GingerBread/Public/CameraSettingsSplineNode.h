#pragma once
#include "CoreMinimal.h"
#include "CameraSettings.h"
#include "CameraSettingsSplineNode.generated.h"

USTRUCT(BlueprintType)
struct GINGERBREAD_API FCameraSettingsSplineNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Distance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCameraSettings CameraSettings;
    
    FCameraSettingsSplineNode();
};

