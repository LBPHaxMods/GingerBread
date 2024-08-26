#pragma once
#include "CoreMinimal.h"
#include "CollisionSection.h"
#include "RawMeshSection.h"
#include "RawMeshProc.generated.h"

USTRUCT(BlueprintType)
struct GINGERBREAD_API FRawMeshProc {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRawMeshSection> MeshSections;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCollisionSection> CollisionSections;
    
    FRawMeshProc();
};

