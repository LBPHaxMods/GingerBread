#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "MusicStateTableRow.generated.h"

USTRUCT(BlueprintType)
struct FMusicStateTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName StateGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName State;
    
    GINGERBREAD_API FMusicStateTableRow();
};

