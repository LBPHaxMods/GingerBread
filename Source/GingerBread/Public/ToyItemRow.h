#pragma once
#include "CoreMinimal.h"
#include "IndexedTableRow.h"
#include "ToyItemRow.generated.h"

USTRUCT(BlueprintType)
struct FToyItemRow : public FIndexedTableRow {
    GENERATED_BODY()
public:
    GINGERBREAD_API FToyItemRow();
};

