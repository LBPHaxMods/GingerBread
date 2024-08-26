#pragma once
#include "CoreMinimal.h"
#include "TetheredWobbleBlobVertexAnimData.generated.h"

class UStaticMesh;
class UVertexAnimationSequence;

USTRUCT(BlueprintType)
struct FTetheredWobbleBlobVertexAnimData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* StaticMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVertexAnimationSequence* VertexAnimationSequence;
    
    GINGERBREAD_API FTetheredWobbleBlobVertexAnimData();
};

