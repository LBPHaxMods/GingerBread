#pragma once
#include "CoreMinimal.h"
#include "EVexBarkEnum.h"
#include "VexBark.generated.h"

USTRUCT(BlueprintType)
struct FVexBark {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText BarkText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVexBarkEnum BarkEnum;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DontShowSubtitle;
    
    GINGERBREAD_API FVexBark();
};

