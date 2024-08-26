#pragma once
#include "CoreMinimal.h"
#include "ELevelType.h"
#include "CPE_WorldSelectLoadSaveData.generated.h"

USTRUCT(BlueprintType)
struct FCPE_WorldSelectLoadSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<ELevelType> WorldSequencesPlayed;
    
    GINGERBREAD_API FCPE_WorldSelectLoadSaveData();
};

