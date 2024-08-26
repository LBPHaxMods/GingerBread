#pragma once
#include "CoreMinimal.h"
#include "ToyTypeProperty.h"
#include "AllowedToys.generated.h"

USTRUCT(BlueprintType)
struct FAllowedToys {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FToyTypeProperty> AllowedToys;
    
    GINGERBREAD_API FAllowedToys();
};

