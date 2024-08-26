#pragma once
#include "CoreMinimal.h"
#include "ActivitySaveData.generated.h"

USTRUCT(BlueprintType)
struct FActivitySaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ActivityID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStarted;
    
    GINGERBREAD_API FActivitySaveData();
};

