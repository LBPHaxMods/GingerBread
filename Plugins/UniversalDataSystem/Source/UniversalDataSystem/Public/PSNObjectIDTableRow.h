#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "PSNObjectID.h"
#include "PSNObjectIDTableRow.generated.h"

USTRUCT(BlueprintType)
struct FPSNObjectIDTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPSNObjectID ID;
    
    UNIVERSALDATASYSTEM_API FPSNObjectIDTableRow();
};

