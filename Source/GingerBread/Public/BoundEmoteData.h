#pragma once
#include "CoreMinimal.h"
#include "ESackboyEmotionalState.h"
#include "BoundEmoteData.generated.h"

USTRUCT(BlueprintType)
struct FBoundEmoteData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EmoteIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESackboyEmotionalState EmoteEmotion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EmoteEmotionLevel;
    
    GINGERBREAD_API FBoundEmoteData();
};

