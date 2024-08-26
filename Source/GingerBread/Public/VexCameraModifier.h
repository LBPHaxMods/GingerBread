#pragma once
#include "CoreMinimal.h"
#include "GingerbreadCameraModifier.h"
#include "VexCameraModifier.generated.h"

class UCurveFloat;

UCLASS(Abstract, Blueprintable)
class UVexCameraModifier : public UGingerbreadCameraModifier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* WobbleCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WobbleSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WobbleXTimeOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WobbleAmplitudeZ;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WobbleAmplitudeX;
    
    UVexCameraModifier();

};

