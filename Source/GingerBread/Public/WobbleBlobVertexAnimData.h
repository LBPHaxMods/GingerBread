#pragma once
#include "CoreMinimal.h"
#include "WobbleBlobVertexAnimData.generated.h"

class UStaticMesh;
class UVertexAnimationSequence;

USTRUCT(BlueprintType)
struct FWobbleBlobVertexAnimData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* StaticMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVertexAnimationSequence* VertexAnimationSequence;
    
    GINGERBREAD_API FWobbleBlobVertexAnimData();
};

