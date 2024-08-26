#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "WorldZoneDialogueRow.generated.h"

USTRUCT(BlueprintType)
struct FWorldZoneDialogueRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> PreviousLevelNotCompletedVO;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> InsufficientOrbsVO;
    
    GINGERBREAD_API FWorldZoneDialogueRow();
};

