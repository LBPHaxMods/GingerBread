#pragma once
#include "CoreMinimal.h"
#include "ArtMoveClip.h"
#include "ArtMoveSequence.generated.h"

USTRUCT(BlueprintType)
struct FArtMoveSequence {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SequenceName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FArtMoveClip> MoveClips;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TotalLength;
    
    GINGERBREAD_API FArtMoveSequence();
};

