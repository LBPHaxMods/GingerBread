#pragma once
#include "CoreMinimal.h"
#include "ToyTypeProperty.generated.h"

USTRUCT(BlueprintType)
struct FToyTypeProperty {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ToyClass;
    
    GINGERBREAD_API FToyTypeProperty();
};

