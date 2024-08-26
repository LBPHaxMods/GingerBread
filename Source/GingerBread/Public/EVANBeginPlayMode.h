#pragma once
#include "CoreMinimal.h"
#include "EVANBeginPlayMode.generated.h"

UENUM(BlueprintType)
namespace EVANBeginPlayMode {
    enum Type {
        None,
        Play,
        PlayFromStart,
        LoopInShader,
    };
}

