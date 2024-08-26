#pragma once
#include "CoreMinimal.h"
#include "CostumeItemEquipDescriptor.generated.h"

USTRUCT(BlueprintType)
struct FCostumeItemEquipDescriptor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CostumeItemName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CostumeItemTintColourName;
    
    GINGERBREAD_API FCostumeItemEquipDescriptor();
};

