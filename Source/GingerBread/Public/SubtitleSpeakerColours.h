#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SubtitleSpeakerColours.generated.h"

USTRUCT(BlueprintType)
struct FSubtitleSpeakerColours {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor SpeakerColourDefault;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor SpeakerColour1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor SpeakerColour2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor SpeakerColour3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor SpeakerColour4;
    
    GINGERBREAD_API FSubtitleSpeakerColours();
};

