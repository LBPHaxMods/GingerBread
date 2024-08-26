#pragma once
#include "CoreMinimal.h"
#include "ItemDataProperty.generated.h"

USTRUCT(BlueprintType)
struct FItemDataProperty {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName widgetName;
    
    GINGERBREAD_API FItemDataProperty();
};

