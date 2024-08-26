#pragma once
#include "CoreMinimal.h"
#include "SackboyDualPlatformHaptics.generated.h"

class UAkAudioEvent;
class UForceFeedbackEffect;

USTRUCT(BlueprintType)
struct FSackboyDualPlatformHaptics {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* BondHaptics;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UForceFeedbackEffect* ForceFeedback;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ForceFeedbackTag;
    
    GINGERBREAD_API FSackboyDualPlatformHaptics();
};

