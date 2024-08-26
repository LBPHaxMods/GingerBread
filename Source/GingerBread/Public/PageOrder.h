#pragma once
#include "CoreMinimal.h"
#include "PageOrder.generated.h"

USTRUCT(BlueprintType)
struct FPageOrder {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> Pages;
    
    GINGERBREAD_API FPageOrder();
};

