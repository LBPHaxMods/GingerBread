#pragma once
#include "CoreMinimal.h"
#include "ESackboyAnimSequenceType.h"
#include "SackboyAnimSequenceRequest.generated.h"

USTRUCT(BlueprintType)
struct FSackboyAnimSequenceRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ESackboyAnimSequenceType SequenceType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bFullBodySequence;
    
    GINGERBREAD_API FSackboyAnimSequenceRequest();
};

