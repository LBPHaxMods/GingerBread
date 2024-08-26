#pragma once
#include "CoreMinimal.h"
#include "EControlMode.h"
#include "SackboySaveData.generated.h"

USTRUCT(BlueprintType)
struct FSackboySaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<EControlMode> PowerupsUsed;
    
    GINGERBREAD_API FSackboySaveData();
};

