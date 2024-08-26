#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ThreadCutData.generated.h"

class AThread;

USTRUCT(BlueprintType)
struct FThreadCutData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector CutLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector cutNormal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AThread* parentThread;
    
    GINGERBREAD_API FThreadCutData();
};

