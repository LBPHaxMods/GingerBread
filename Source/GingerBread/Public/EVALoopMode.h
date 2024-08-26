#pragma once
#include "CoreMinimal.h"
#include "EVALoopMode.generated.h"

UENUM(BlueprintType)
namespace EVALoopMode {
    enum Type {
        DontLoop,
        Loop,
        PingPong,
    };
}

