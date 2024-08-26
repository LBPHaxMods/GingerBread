#pragma once
#include "CoreMinimal.h"
#include "CostumeItem.h"
#include "UnlockDetails.h"
#include "CostumeItemQuery.generated.h"

USTRUCT(BlueprintType)
struct FCostumeItemQuery {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CostumeItemName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCostumeItem CostumeItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUnlockDetails UnlockDetails;
    
    GINGERBREAD_API FCostumeItemQuery();
};

