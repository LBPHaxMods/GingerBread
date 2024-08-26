#pragma once
#include "CoreMinimal.h"
#include "LookupTableColumn.generated.h"

USTRUCT(BlueprintType)
struct FLookupTableColumn {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> audioMaterialColumn;
    
    GINGERBREAD_API FLookupTableColumn();
};

