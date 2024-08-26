#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ETrophy.h"
#include "TrophyMeterInfo.h"
#include "LevelTrophyRow.generated.h"

USTRUCT(BlueprintType)
struct GINGERBREAD_API FLevelTrophyRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TEnumAsByte<ETrophy::Type>, FTrophyMeterInfo> Trophies;
    
    FLevelTrophyRow();
};

