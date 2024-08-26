#pragma once
#include "CoreMinimal.h"
#include "EControlMode.h"
#include "ESackboyAnimSequenceType.h"
#include "SackboyAnimSequence.h"
#include "SackboyAnimSequenceDetails.generated.h"

USTRUCT(BlueprintType)
struct FSackboyAnimSequenceDetails {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESackboyAnimSequenceType SequenceType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EControlMode EquipControlMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSackboyAnimSequence FullBodySequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSackboyAnimSequence UpperBodySequence;
    
    GINGERBREAD_API FSackboyAnimSequenceDetails();
};

