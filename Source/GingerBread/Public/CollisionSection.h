#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CollisionSection.generated.h"

USTRUCT(BlueprintType)
struct GINGERBREAD_API FCollisionSection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> ConvexVerts;
    
    FCollisionSection();
};

