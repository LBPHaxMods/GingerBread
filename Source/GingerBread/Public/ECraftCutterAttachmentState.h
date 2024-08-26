#pragma once
#include "CoreMinimal.h"
#include "ECraftCutterAttachmentState.generated.h"

UENUM(BlueprintType)
enum class ECraftCutterAttachmentState : uint8 {
    NotAttached,
    CatchingInHand,
    CatchingOnBack,
    AttachedToHand,
    AttachedToBack,
    AttachedToRollSocket,
    TransferFromHandToBack,
};

