#pragma once
#include "CoreMinimal.h"
#include "UIGroupedGridListCategory.generated.h"

class UGingerbreadGroupedGridList_Grid;
class UUserWidget;

USTRUCT(BlueprintType)
struct FUIGroupedGridListCategory {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CategoryName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Index;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* HeaderWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGingerbreadGroupedGridList_Grid* GridWidget;
    
    GINGERBREAD_API FUIGroupedGridListCategory();
};

