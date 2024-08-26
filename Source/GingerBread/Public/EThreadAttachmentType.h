#pragma once
#include "CoreMinimal.h"
#include "EThreadAttachmentType.generated.h"

UENUM(BlueprintType)
enum class EThreadAttachmentType : uint8 {
    Static,
    Dynamic,
    Attached,
};

