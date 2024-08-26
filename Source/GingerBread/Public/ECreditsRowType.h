#pragma once
#include "CoreMinimal.h"
#include "ECreditsRowType.generated.h"

UENUM(BlueprintType)
enum class ECreditsRowType : uint8 {
    Invalid,
    SingleName,
    DualName,
    JobTitleAndName,
    RightHandName,
    TextBlock,
    Spacer,
    Heading,
    SubHeading,
    ImageLeft,
    ImageRight,
    ImageCentre,
    DualImage,
    V_CentreBlurb,
    V_CentreBlurbBold,
    V_CentreBlurbName,
    V_Heading,
    V_MusicName,
    V_RightHandName,
    V_TextBlock,
    V_TitleAndName,
};

