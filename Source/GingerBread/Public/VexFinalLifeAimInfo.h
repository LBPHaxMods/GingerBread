#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "VexFinalLifeAimInfo.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FVexFinalLifeAimInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* AimActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector StartAimLocation;
    
    GINGERBREAD_API FVexFinalLifeAimInfo();
};

