#pragma once
#include "CoreMinimal.h"
#include "GingerbreadSubLevelDropdown.generated.h"

USTRUCT(BlueprintType)
struct FGingerbreadSubLevelDropdown {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SubLevelPath;
    
    GINGERBREAD_API FGingerbreadSubLevelDropdown();
};

