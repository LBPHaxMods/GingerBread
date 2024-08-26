#pragma once
#include "CoreMinimal.h"
#include "ESportsSpawnedCratePieceInfo.generated.h"

class UStaticMeshComponent;

USTRUCT(BlueprintType)
struct FESportsSpawnedCratePieceInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* StaticMeshComponent;
    
    GINGERBREAD_API FESportsSpawnedCratePieceInfo();
};

