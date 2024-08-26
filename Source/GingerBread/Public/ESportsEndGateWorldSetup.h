#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ESportsEndGateWorldSetup.generated.h"

USTRUCT(BlueprintType)
struct FESportsEndGateWorldSetup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor EndVfx_MainColour;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor EndVfx_SecondColour;
    
    GINGERBREAD_API FESportsEndGateWorldSetup();
};

