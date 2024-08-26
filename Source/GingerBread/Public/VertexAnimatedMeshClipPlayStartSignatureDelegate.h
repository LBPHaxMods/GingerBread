#pragma once
#include "CoreMinimal.h"
#include "VertexAnimatedMeshClipPlayStartSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FVertexAnimatedMeshClipPlayStartSignature, int32, ClipIndex);

