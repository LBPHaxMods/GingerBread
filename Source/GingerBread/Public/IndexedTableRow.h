#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "IndexedTableRow.generated.h"

USTRUCT(BlueprintType)
struct FIndexedTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RowID;
    
    GINGERBREAD_API FIndexedTableRow();
};

