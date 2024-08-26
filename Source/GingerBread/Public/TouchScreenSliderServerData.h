#pragma once
#include "CoreMinimal.h"
#include "TouchScreenSliderServerData.generated.h"

class ASackboy;

USTRUCT(BlueprintType)
struct FTouchScreenSliderServerData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ServerTimeStamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SliderPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SliderSpeed;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ASackboy> TrackedSackboy;
    
    GINGERBREAD_API FTouchScreenSliderServerData();
};

