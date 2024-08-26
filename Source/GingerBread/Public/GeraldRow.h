#pragma once
#include "CoreMinimal.h"
#include "IndexedTableRow.h"
#include "GeraldRow.generated.h"

USTRUCT(BlueprintType)
struct FGeraldRow : public FIndexedTableRow {
    GENERATED_BODY()
public:
    GINGERBREAD_API FGeraldRow();
};

