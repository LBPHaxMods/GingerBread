#pragma once
#include "CoreMinimal.h"
#include "RandomSequenceEntry.generated.h"

class UAnimSequenceBase;

USTRUCT(BlueprintType)
struct FRandomSequenceEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* Sequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChanceToPlay;
    
    GINGERBREAD_API FRandomSequenceEntry();
};

