#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "VoidSelectUnlockDataBase.h"
#include "VoidSelectUnlockDataLevel.generated.h"

USTRUCT(BlueprintType)
struct FVoidSelectUnlockDataLevel : public FVoidSelectUnlockDataBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle LevelRow;
    
    GINGERBREAD_API FVoidSelectUnlockDataLevel();
};

