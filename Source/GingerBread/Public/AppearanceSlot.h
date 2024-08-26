#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AppearanceSlot.generated.h"

USTRUCT(BlueprintType)
struct FAppearanceSlot {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor UIColour;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor ControllerColour;
    
    GINGERBREAD_API FAppearanceSlot();
};

