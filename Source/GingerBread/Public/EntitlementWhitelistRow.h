#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EntitlementWhitelistRow.generated.h"

USTRUCT(BlueprintType)
struct FEntitlementWhitelistRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ID;
    
    GINGERBREAD_API FEntitlementWhitelistRow();
};

