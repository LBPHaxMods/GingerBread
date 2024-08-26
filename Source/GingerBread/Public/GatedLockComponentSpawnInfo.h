#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GatedLockComponentSpawnInfo.generated.h"

class UStaticMesh;

USTRUCT(BlueprintType)
struct FGatedLockComponentSpawnInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* StaticMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Offset;
    
    GINGERBREAD_API FGatedLockComponentSpawnInfo();
};

