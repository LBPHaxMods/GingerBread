#pragma once
#include "CoreMinimal.h"
#include "TorchCardboardAssets.generated.h"

class UStaticMesh;

USTRUCT(BlueprintType)
struct FTorchCardboardAssets {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UStaticMesh> DefaultMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UStaticMesh> WallMesh;
    
    GINGERBREAD_API FTorchCardboardAssets();
};

