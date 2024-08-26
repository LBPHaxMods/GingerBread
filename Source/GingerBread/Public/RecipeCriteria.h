#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "RecipeAttachment.h"
#include "RecipeCriteria.generated.h"

USTRUCT(BlueprintType)
struct FRecipeCriteria {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle AdditiveType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRecipeAttachment> Attachments;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ObjectQuantity;
    
    GINGERBREAD_API FRecipeCriteria();
};

