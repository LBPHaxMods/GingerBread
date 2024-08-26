#pragma once
#include "CoreMinimal.h"
#include "IndexedTableRow.h"
#include "MemoryOrbDataTableRow.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FMemoryOrbDataTableRow : public FIndexedTableRow {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> Material;
    
    GINGERBREAD_API FMemoryOrbDataTableRow();
};

