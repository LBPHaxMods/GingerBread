#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "VexEncounterThrowTargetInfo.generated.h"

USTRUCT(BlueprintType)
struct FVexEncounterThrowTargetInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool LookAtThrowTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ThrowTargetLocation;
    
    GINGERBREAD_API FVexEncounterThrowTargetInfo();
};

