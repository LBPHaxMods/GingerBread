#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SackboyAnimSequence.generated.h"

class UAnimSequence;

USTRUCT(BlueprintType)
struct FSackboyAnimSequence {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath AnimSequenceAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* AnimSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SequenceDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EquipDelay;
    
    GINGERBREAD_API FSackboyAnimSequence();
};

