#pragma once
#include "CoreMinimal.h"
#include "WaterObjectProc.h"
#include "WaterObjectProcSpline.generated.h"

class USplineComponent;

UCLASS(Blueprintable)
class AWaterObjectProcSpline : public AWaterObjectProc {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USplineComponent* Spline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WidthSegments;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Width;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LengthSegmentSize;
    
    AWaterObjectProcSpline(const FObjectInitializer& ObjectInitializer);

};

