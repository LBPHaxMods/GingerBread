#pragma once
#include "CoreMinimal.h"
#include "VertexAnimatedMeshClipPlayLoopSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FVertexAnimatedMeshClipPlayLoopSignature, int32, ClipIndex);

