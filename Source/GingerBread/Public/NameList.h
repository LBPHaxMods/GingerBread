#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "NameList.generated.h"

USTRUCT(BlueprintType)
struct FNameList : public FTableRowBase {
    GENERATED_BODY()
public:
    GINGERBREAD_API FNameList();
};

