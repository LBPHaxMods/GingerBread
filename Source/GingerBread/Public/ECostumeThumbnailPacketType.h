#pragma once
#include "CoreMinimal.h"
#include "ECostumeThumbnailPacketType.generated.h"

UENUM(BlueprintType)
enum class ECostumeThumbnailPacketType : uint8 {
    Invalid,
    Request,
    Image,
};

