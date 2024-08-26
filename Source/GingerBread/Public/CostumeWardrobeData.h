#pragma once
#include "CoreMinimal.h"
#include "CostumeHangerData.h"
#include "CostumeWardrobeData.generated.h"

USTRUCT(BlueprintType)
struct FCostumeWardrobeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCostumeHangerData> CostumeRail;
    
    GINGERBREAD_API FCostumeWardrobeData();
};

