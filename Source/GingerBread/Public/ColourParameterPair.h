#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ColourParameterPair.generated.h"

USTRUCT(BlueprintType)
struct FColourParameterPair {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor Value;
    
    GINGERBREAD_API FColourParameterPair();
};

