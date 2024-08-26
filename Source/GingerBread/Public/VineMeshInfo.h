#pragma once
#include "CoreMinimal.h"
#include "VineMeshInfo.generated.h"

class UStaticMeshComponent;

USTRUCT(BlueprintType)
struct FVineMeshInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* VineMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsTarget;
    
    GINGERBREAD_API FVineMeshInfo();
};

