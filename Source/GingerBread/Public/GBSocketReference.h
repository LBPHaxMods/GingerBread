#pragma once
#include "CoreMinimal.h"
#include "GBSocketReference.generated.h"

USTRUCT(BlueprintType)
struct FGBSocketReference {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SocketName;
    
    GINGERBREAD_API FGBSocketReference();
};

