#pragma once
#include "CoreMinimal.h"
#include "HistoryEntry.generated.h"

class ULevel;

USTRUCT(BlueprintType)
struct FHistoryEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULevel* Level;
    
    GINGERBREAD_API FHistoryEntry();
};

