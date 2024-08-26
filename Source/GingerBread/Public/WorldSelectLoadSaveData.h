#pragma once
#include "CoreMinimal.h"
#include "ELevelType.h"
#include "WorldSelectLoadSaveData.generated.h"

USTRUCT(BlueprintType)
struct FWorldSelectLoadSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<ELevelType> WorldSequencesPlayed;
    
    GINGERBREAD_API FWorldSelectLoadSaveData();
};

