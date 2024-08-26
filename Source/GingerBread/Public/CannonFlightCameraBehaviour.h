#pragma once
#include "CoreMinimal.h"
#include "CameraBehaviour.h"
#include "CannonFlightCameraBehaviour.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GINGERBREAD_API UCannonFlightCameraBehaviour : public UCameraBehaviour {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TrackingBlend;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RotationBlend;
    
public:
    UCannonFlightCameraBehaviour(const FObjectInitializer& ObjectInitializer);

};

