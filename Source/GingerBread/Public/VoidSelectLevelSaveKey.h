#pragma once
#include "CoreMinimal.h"
#include "VoidSelectLevelSaveKey.generated.h"

USTRUCT(BlueprintType)
struct FVoidSelectLevelSaveKey {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TableName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RowName;
    
    GINGERBREAD_API FVoidSelectLevelSaveKey();
};

