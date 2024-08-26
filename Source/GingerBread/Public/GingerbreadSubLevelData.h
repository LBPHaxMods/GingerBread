#pragma once
#include "CoreMinimal.h"
#include "GingerbreadSubLevelData.generated.h"

USTRUCT(BlueprintType)
struct FGingerbreadSubLevelData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanBeReset;
    
    GINGERBREAD_API FGingerbreadSubLevelData();
};

