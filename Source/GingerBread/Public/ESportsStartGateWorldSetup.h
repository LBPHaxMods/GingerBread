#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ESportsStartGateWorldSetup.generated.h"

USTRUCT(BlueprintType)
struct FESportsStartGateWorldSetup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor StartVfx_MainColour;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor StartVfx_SecondColour;
    
    GINGERBREAD_API FESportsStartGateWorldSetup();
};

