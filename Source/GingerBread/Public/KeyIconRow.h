#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "IndexedTableRow.h"
#include "KeyIconRow.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FKeyIconRow : public FIndexedTableRow {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey Key;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> ButtonTexture;
    
    GINGERBREAD_API FKeyIconRow();
};

