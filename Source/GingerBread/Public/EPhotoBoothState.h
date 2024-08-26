#pragma once
#include "CoreMinimal.h"
#include "EPhotoBoothState.generated.h"

UENUM(BlueprintType)
namespace EPhotoBoothState {
    enum Type {
        Idle,
        Started,
        Finished,
    };
}

