#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "StartGateWorldSetup.generated.h"

USTRUCT(BlueprintType)
struct FStartGateWorldSetup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor StartVfx_MainColour;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor StartVfx_SecondColour;
    
    GINGERBREAD_API FStartGateWorldSetup();
};

