#pragma once
#include "CoreMinimal.h"
#include "CostumeItemCategoryMetaData.generated.h"

USTRUCT(BlueprintType)
struct FCostumeItemCategoryMetaData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText CategoryName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText CategoryDescription;
    
    GINGERBREAD_API FCostumeItemCategoryMetaData();
};

