#pragma once
#include "CoreMinimal.h"
#include "PageData.generated.h"

class UTouchScreenAppBaseComponent;

USTRUCT(BlueprintType)
struct FPageData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UTouchScreenAppBaseComponent*> Apps;
    
    GINGERBREAD_API FPageData();
};

