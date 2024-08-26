#pragma once
#include "CoreMinimal.h"
#include "EFakeHatchState.h"
#include "HatchState.generated.h"

USTRUCT(BlueprintType)
struct FHatchState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ServerRequestTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFakeHatchState HatchState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HatchAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool PhysicalHatchVisible;
    
    GINGERBREAD_API FHatchState();
};

