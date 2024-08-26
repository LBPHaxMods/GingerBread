#pragma once
#include "CoreMinimal.h"
#include "ObjectResetSpawnParams.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FObjectResetSpawnParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UObject> Outer;
    
    GINGERBREAD_API FObjectResetSpawnParams();
};

