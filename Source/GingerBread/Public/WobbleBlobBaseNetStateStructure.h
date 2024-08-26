#pragma once
#include "CoreMinimal.h"
#include "EWobbleBlobBaseNetState.h"
#include "WobbleBlobBaseNetStateStructure.generated.h"

class ASackboy;

USTRUCT(BlueprintType)
struct FWobbleBlobBaseNetStateStructure {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EWobbleBlobBaseNetState::Type> State;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ASackboy> ThrownBySackboy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool RollBurst;
    
    GINGERBREAD_API FWobbleBlobBaseNetStateStructure();
};

