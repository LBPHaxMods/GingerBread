#pragma once
#include "CoreMinimal.h"
#include "EWobbleBlobNetState.h"
#include "WobbleBlobNetStateStructure.generated.h"

class ASackboy;

USTRUCT(BlueprintType)
struct FWobbleBlobNetStateStructure {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EWobbleBlobNetState::Type> State;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ASackboy> ThrownBySackboy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool RollBurst;
    
    GINGERBREAD_API FWobbleBlobNetStateStructure();
};

