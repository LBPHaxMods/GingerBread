#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "UnlockableItemMetadataTag.h"
#include "DLCProductDataRow.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FDLCProductDataRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> ProductImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FUnlockableItemMetadataTag> InGameItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> EntitlementsGranted;
    
    GINGERBREAD_API FDLCProductDataRow();
};

