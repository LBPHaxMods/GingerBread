#pragma once
#include "CoreMinimal.h"
#include "ItemDataProperty.h"
#include "ItemDataProperty_Text.generated.h"

USTRUCT(BlueprintType)
struct FItemDataProperty_Text : public FItemDataProperty {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Text;
    
    GINGERBREAD_API FItemDataProperty_Text();
};

