#pragma once
#include "CoreMinimal.h"
#include "TriangleBound.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FTriangleBound {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* ActorA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* ActorB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* ActorC;
    
    GINGERBREAD_API FTriangleBound();
};

