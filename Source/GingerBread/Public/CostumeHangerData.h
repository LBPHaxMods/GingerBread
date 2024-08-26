#pragma once
#include "CoreMinimal.h"
#include "CostumeItemEquipDescriptor.h"
#include "CostumeHangerData.generated.h"

USTRUCT(BlueprintType)
struct FCostumeHangerData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText HangerName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCostumeItemEquipDescriptor> CostumeItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HangerID;
    
    GINGERBREAD_API FCostumeHangerData();
};

