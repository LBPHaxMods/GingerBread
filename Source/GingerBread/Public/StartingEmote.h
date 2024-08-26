#pragma once
#include "CoreMinimal.h"
#include "ESackboyEmotionalState.h"
#include "StartingEmote.generated.h"

USTRUCT(BlueprintType)
struct FStartingEmote {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EmoteName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESackboyEmotionalState EmotionalState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EmotionalLevel;
    
    GINGERBREAD_API FStartingEmote();
};

