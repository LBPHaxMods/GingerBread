#pragma once
#include "CoreMinimal.h"
#include "EditorLevelObjectTrackerCount.generated.h"

USTRUCT(BlueprintType)
struct FEditorLevelObjectTrackerCount {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName WorldLevelName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Count;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CodedCount;
    
    GINGERBREAD_API FEditorLevelObjectTrackerCount();
};

