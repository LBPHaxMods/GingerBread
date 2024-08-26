#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EditorLevelObjectTrackerItem.generated.h"

USTRUCT(BlueprintType)
struct FEditorLevelObjectTrackerItem : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LevelTrackerName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> SearchClassStrings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> SearchCodedClassStrings;
    
    GINGERBREAD_API FEditorLevelObjectTrackerItem();
};

