#pragma once
#include "CoreMinimal.h"
#include "ETouchSliderMaterialIndex.generated.h"

UENUM(BlueprintType)
namespace ETouchSliderMaterialIndex {
    enum Type {
        HANDLE_FADE_IN,
        HANDLE_FADE_OUT,
        OVERLAPPED,
        UNOVERLAPPED,
        FADE_IN,
        FADE_OUT,
        COMPLETE,
        MAX,
    };
}

