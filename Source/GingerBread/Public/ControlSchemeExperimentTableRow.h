#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ControlSchemeExperimentTableRow.generated.h"

class UControlScheme;

USTRUCT(BlueprintType)
struct FControlSchemeExperimentTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UControlScheme* ControlScheme;
    
    GINGERBREAD_API FControlSchemeExperimentTableRow();
};

