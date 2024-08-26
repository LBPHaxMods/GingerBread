#pragma once
#include "CoreMinimal.h"
#include "EMamapedeGroundCrackingMode.h"
#include "MamapedeGroundCrackingServerState.generated.h"

USTRUCT(BlueprintType)
struct FMamapedeGroundCrackingServerState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMamapedeGroundCrackingMode CurrentMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CrackingTime;
    
    GINGERBREAD_API FMamapedeGroundCrackingServerState();
};

