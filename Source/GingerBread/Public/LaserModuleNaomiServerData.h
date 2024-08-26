#pragma once
#include "CoreMinimal.h"
#include "ELaserModuleNaomiIsOnType.h"
#include "LaserModuleNaomiServerData.generated.h"

USTRUCT(BlueprintType)
struct FLaserModuleNaomiServerData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentRequestTimestamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELaserModuleNaomiIsOnType IsOn;
    
    GINGERBREAD_API FLaserModuleNaomiServerData();
};

