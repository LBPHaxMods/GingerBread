#pragma once
#include "CoreMinimal.h"
#include "CostumeItemTintPair.generated.h"

USTRUCT(BlueprintType)
struct FCostumeItemTintPair {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ItemName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ItemColour;
    
    GINGERBREAD_API FCostumeItemTintPair();
};

