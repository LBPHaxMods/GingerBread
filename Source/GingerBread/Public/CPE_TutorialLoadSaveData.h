#pragma once
#include "CoreMinimal.h"
#include "ETutorialLogicType.h"
#include "CPE_TutorialLoadSaveData.generated.h"

USTRUCT(BlueprintType)
struct FCPE_TutorialLoadSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ETutorialLogicType, float> LogicValues;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FName> Complete;
    
    GINGERBREAD_API FCPE_TutorialLoadSaveData();
};

