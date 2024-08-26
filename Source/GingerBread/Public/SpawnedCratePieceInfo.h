#pragma once
#include "CoreMinimal.h"
#include "SpawnedCratePieceInfo.generated.h"

class UStaticMeshComponent;

USTRUCT(BlueprintType)
struct FSpawnedCratePieceInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* StaticMeshComponent;
    
    GINGERBREAD_API FSpawnedCratePieceInfo();
};

