#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ActionTextPrompt.generated.h"

USTRUCT(BlueprintType)
struct FActionTextPrompt : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ActionPrompt;
    
    GINGERBREAD_API FActionTextPrompt();
};

