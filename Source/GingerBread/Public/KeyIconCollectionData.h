#pragma once
#include "CoreMinimal.h"
#include "KeyIconCollectionData.generated.h"

class UDataTable;
class UTexture2D;

USTRUCT(BlueprintType)
struct FKeyIconCollectionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> DeviceTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* IconDataTable;
    
    GINGERBREAD_API FKeyIconCollectionData();
};

