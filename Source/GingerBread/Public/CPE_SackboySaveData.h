#pragma once
#include "CoreMinimal.h"
#include "EControlMode.h"
#include "CPE_SackboySaveData.generated.h"

USTRUCT(BlueprintType)
struct FCPE_SackboySaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<EControlMode> PowerupsUsed;
    
    GINGERBREAD_API FCPE_SackboySaveData();
};

