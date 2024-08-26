#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "PSNObjectID.h"
#include "ActivityRow.generated.h"

USTRUCT(BlueprintType)
struct FActivityRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPSNObjectID ActivityName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RowName;
    
    GINGERBREAD_API FActivityRow();
};

