#pragma once
#include "CoreMinimal.h"
#include "GingerbreadManager.h"
#include "ScoreBubbleAndClosest.h"
#include "ScoreBubbleManager.generated.h"

UCLASS(Blueprintable)
class GINGERBREAD_API AScoreBubbleManager : public AGingerbreadManager {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BubbleRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WobblinessAmplitude;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WobblinessFrequency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WobblinessReductionSpeed;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FScoreBubbleAndClosest> Bubbles;
    
public:
    AScoreBubbleManager(const FObjectInitializer& ObjectInitializer);

};

