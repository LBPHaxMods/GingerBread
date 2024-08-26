#pragma once
#include "CoreMinimal.h"
#include "EMoverToolEventDirections.h"
#include "Templates/SubclassOf.h"
#include "MoverToolEventsStruct.generated.h"

class UAkAudioEvent;
class UCameraShake;
class UForceFeedbackEffect;

USTRUCT(BlueprintType)
struct FMoverToolEventsStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PositionAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMoverToolEventDirections Direction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UForceFeedbackEffect* Rumble;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCameraShake> CameraShake;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* Audio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* Haptic;
    
    GINGERBREAD_API FMoverToolEventsStruct();
};

