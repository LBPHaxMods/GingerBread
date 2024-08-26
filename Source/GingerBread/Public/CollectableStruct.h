#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "CollectableStruct.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FCollectableStruct : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* TreasureIcon;
    
    GINGERBREAD_API FCollectableStruct();
};

