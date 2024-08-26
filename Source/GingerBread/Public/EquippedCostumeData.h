#pragma once
#include "CoreMinimal.h"
#include "CostumeItemEquipDescriptor.h"
#include "EquippedCostumeData.generated.h"

USTRUCT(BlueprintType)
struct FEquippedCostumeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EquippedCostume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EquippedHanger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCostumeItemEquipDescriptor> EquippedItems;
    
    GINGERBREAD_API FEquippedCostumeData();
};

