#pragma once
#include "CoreMinimal.h"
#include "MinibossMeanieArenaManipulationEmergencyStopSettings.generated.h"

USTRUCT(BlueprintType)
struct FMinibossMeanieArenaManipulationEmergencyStopSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EmergencyStopInnerRingVerticalSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EmergencyStopOuterRingVerticalSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EmergencyStopInnerRingRotationDeceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EmergencyStopOuterRingRotationDeceleration;
    
    GINGERBREAD_API FMinibossMeanieArenaManipulationEmergencyStopSettings();
};

