#pragma once
#include "CoreMinimal.h"
#include "ETetheredWobbleBlobNetState.h"
#include "TetheredWobbleBlobNetStateStructure.generated.h"

USTRUCT(BlueprintType)
struct FTetheredWobbleBlobNetStateStructure {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ETetheredWobbleBlobNetState::Type> State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool RollBurst;
    
    GINGERBREAD_API FTetheredWobbleBlobNetStateStructure();
};

