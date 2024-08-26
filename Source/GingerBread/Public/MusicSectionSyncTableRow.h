#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "MusicSectionSyncTableRow.generated.h"

USTRUCT(BlueprintType)
struct FMusicSectionSyncTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> SegmentDurations;
    
    GINGERBREAD_API FMusicSectionSyncTableRow();
};

