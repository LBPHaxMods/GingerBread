#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNode_AssetPlayerBase.h"
#include "SumoRandomAnimData.h"
#include "AnimNode_SumoRandomAnimPlayer.generated.h"

class UAnimSequenceBase;

USTRUCT(BlueprintType)
struct GINGERBREAD_API FAnimNode_SumoRandomAnimPlayer : public FAnimNode_AssetPlayerBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSumoRandomAnimData> AnimationList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartPosition;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* CurrentSequence;
    
public:
    FAnimNode_SumoRandomAnimPlayer();
};

