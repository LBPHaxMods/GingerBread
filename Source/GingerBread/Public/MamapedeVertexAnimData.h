#pragma once
#include "CoreMinimal.h"
#include "EMamapedeVertexAnimState.h"
#include "MamapedeVertexAnimData.generated.h"

USTRUCT(BlueprintType)
struct FMamapedeVertexAnimData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EMamapedeVertexAnimState AnimState;
    
    GINGERBREAD_API FMamapedeVertexAnimData();
};

