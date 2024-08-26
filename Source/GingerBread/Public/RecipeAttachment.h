#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "RecipeAttachment.generated.h"

USTRUCT(BlueprintType)
struct FRecipeAttachment {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle AdditiveType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AttachmentArea;
    
    GINGERBREAD_API FRecipeAttachment();
};

