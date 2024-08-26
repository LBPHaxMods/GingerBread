#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataTable.h"
#include "FootGribbleFxTableRow.generated.h"

USTRUCT(BlueprintType)
struct FFootGribbleFxTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor Color;
    
    GINGERBREAD_API FFootGribbleFxTableRow();
};

