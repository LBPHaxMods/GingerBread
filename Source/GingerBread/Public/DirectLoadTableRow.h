#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "DirectLoadTableRow.generated.h"

USTRUCT(BlueprintType)
struct FDirectLoadTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LevelName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SpawnPointName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Comment;
    
    GINGERBREAD_API FDirectLoadTableRow();
};

