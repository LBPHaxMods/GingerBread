#pragma once
#include "CoreMinimal.h"
#include "JumpMeasurement.generated.h"

class ATextRenderActor;

USTRUCT(BlueprintType)
struct FJumpMeasurement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATextRenderActor* Text;
    
    GINGERBREAD_API FJumpMeasurement();
};

