#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstanceProxy.h"
#include "SackboyAnimInstanceProxy.generated.h"

USTRUCT(BlueprintType)
struct FSackboyAnimInstanceProxy : public FAnimInstanceProxy {
    GENERATED_BODY()
public:
    GINGERBREAD_API FSackboyAnimInstanceProxy();
};

