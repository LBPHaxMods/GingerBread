#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RemixSpotlightSackboyDetectionData.generated.h"

USTRUCT(BlueprintType)
struct FRemixSpotlightSackboyDetectionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimelineValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor Colour;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Opacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OpacityScalar;
    
    GINGERBREAD_API FRemixSpotlightSackboyDetectionData();
};

