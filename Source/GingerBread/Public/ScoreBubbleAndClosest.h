#pragma once
#include "CoreMinimal.h"
#include "ScoreBubbleAndClosest.generated.h"

class AScoreBubble;
class UMaterialInstanceDynamic;
class UMaterialInterface;

USTRUCT(BlueprintType)
struct FScoreBubbleAndClosest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AScoreBubble* bubble;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* Material;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* ParentMaterial;
    
    GINGERBREAD_API FScoreBubbleAndClosest();
};

