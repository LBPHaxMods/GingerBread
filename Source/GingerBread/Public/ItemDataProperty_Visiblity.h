#pragma once
#include "CoreMinimal.h"
#include "Components/SlateWrapperTypes.h"
#include "ItemDataProperty.h"
#include "ItemDataProperty_Visiblity.generated.h"

USTRUCT(BlueprintType)
struct FItemDataProperty_Visiblity : public FItemDataProperty {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESlateVisibility Visibility;
    
    GINGERBREAD_API FItemDataProperty_Visiblity();
};

