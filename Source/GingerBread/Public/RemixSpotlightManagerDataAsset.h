#pragma once
#include "CoreMinimal.h"
#include "ERemixSpotlightPenaltyType.h"
#include "RemixSpotlightDecalSettings.h"
#include "RemixSpotlightPenaltyEffects.h"
#include "TimedChallengeDataAsset.h"
#include "RemixSpotlightManagerDataAsset.generated.h"

class ARemixSpotlight;

UCLASS(Blueprintable)
class URemixSpotlightManagerDataAsset : public UTimedChallengeDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoRegisterAllSpotlights;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSoftObjectPtr<ARemixSpotlight>, float> RegisteredSpotlights;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERemixSpotlightPenaltyType PenaltyType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PenaltyTimeMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PenaltyTimeOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PenaltyTimeOffsetCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bScalePenaltyForPlayerCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRemixSpotlightDecalSettings SpotlightDecalSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRemixSpotlightPenaltyEffects SpotlightPenaltyEffects;
    
    URemixSpotlightManagerDataAsset();

};

