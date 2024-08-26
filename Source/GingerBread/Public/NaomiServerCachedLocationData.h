#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "NaomiServerCachedLocationData.generated.h"

USTRUCT(BlueprintType)
struct FNaomiServerCachedLocationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HasBeenSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector CachedOriginalMoveSceneLoc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector CachedOriginalFileSceneLoc;
    
    GINGERBREAD_API FNaomiServerCachedLocationData();
};

