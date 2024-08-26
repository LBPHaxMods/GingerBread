#pragma once
#include "CoreMinimal.h"
#include "SquareBound.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FSquareBound {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* ActorA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* ActorB;
    
    GINGERBREAD_API FSquareBound();
};

