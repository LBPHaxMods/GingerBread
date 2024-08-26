#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "DLCAutoUnlockRow.generated.h"

USTRUCT(BlueprintType)
struct FDLCAutoUnlockRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SonyId;
    
    GINGERBREAD_API FDLCAutoUnlockRow();
};

