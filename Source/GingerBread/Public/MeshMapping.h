#pragma once
#include "CoreMinimal.h"
#include "MeshMapping.generated.h"

class UStaticMeshComponent;

USTRUCT(BlueprintType)
struct FMeshMapping {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* CreationMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* VehicleMesh;
    
    GINGERBREAD_API FMeshMapping();
};

