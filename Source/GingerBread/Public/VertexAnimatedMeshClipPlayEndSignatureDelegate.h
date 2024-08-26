#pragma once
#include "CoreMinimal.h"
#include "VertexAnimatedMeshClipPlayEndSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FVertexAnimatedMeshClipPlayEndSignature, int32, ClipIndex);

