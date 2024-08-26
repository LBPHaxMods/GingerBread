#pragma once
#include "CoreMinimal.h"
#include "MoverToolVisibilityStruct.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FMoverToolVisibilityStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Actor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool VisibilityBefore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool VisibilityDuring;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool VisibilityAfter;
    
    GINGERBREAD_API FMoverToolVisibilityStruct();
};

