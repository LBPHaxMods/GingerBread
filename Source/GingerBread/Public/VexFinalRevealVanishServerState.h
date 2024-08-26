#pragma once
#include "CoreMinimal.h"
#include "EVexFinalRevealVanishState.h"
#include "VexFinalRevealVanishServerState.generated.h"

USTRUCT(BlueprintType)
struct FVexFinalRevealVanishServerState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ServerTimeStamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVexFinalRevealVanishState RevealVanishState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentRevealVanishTimeStamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RevealVanishTimer;
    
    GINGERBREAD_API FVexFinalRevealVanishServerState();
};

