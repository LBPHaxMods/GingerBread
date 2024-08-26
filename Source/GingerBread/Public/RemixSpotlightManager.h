#pragma once
#include "CoreMinimal.h"
#include "ERemixSpotlightPenaltyType.h"
#include "RemixSpotlightDecalSettings.h"
#include "RemixSpotlightPenaltyEffects.h"
#include "TimedChallenge.h"
#include "RemixSpotlightManager.generated.h"

class ARemixSpotlight;
class ASackboy;

UCLASS(Blueprintable)
class ARemixSpotlightManager : public ATimedChallenge {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bAutoRegisterAllSpotlights;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSoftObjectPtr<ARemixSpotlight>, float> m_RegisteredSpotlights;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERemixSpotlightPenaltyType m_PenaltyType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_PenaltyTimeMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_PenaltyTimeOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_PenaltyTimeOffsetCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bScalePenaltyForPlayerCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FRemixSpotlightDecalSettings m_SpotlightDecalSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FRemixSpotlightPenaltyEffects m_SpotlightPenaltyEffects;
    
public:
    ARemixSpotlightManager(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void TriggerSackboyPenaltyEffects(ASackboy* Sackboy);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void TriggerGlobalPenaltyEffects();
    
};

