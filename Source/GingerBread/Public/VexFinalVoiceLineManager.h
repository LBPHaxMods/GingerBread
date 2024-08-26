#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EVexFinalVoiceLineTriggerGroupType.h"
#include "EVexFinalVoiceLineTriggerType.h"
#include "EVexFinalVoiceLineType.h"
#include "VexFinalActiveInfo.h"
#include "VexFinalVoiceLine.h"
#include "VexFinalVoiceTriggerCollection.h"
#include "VexFinalVoiceLineManager.generated.h"

class USceneComponent;

UCLASS(Abstract, Blueprintable)
class AVexFinalVoiceLineManager : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* SceneRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DisembodiedRTPC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EVexFinalVoiceLineTriggerGroupType, FVexFinalVoiceTriggerCollection> TriggerCollections;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EVexFinalVoiceLineType, FVexFinalVoiceLine> VoiceLines;
    
    AVexFinalVoiceLineManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool TriggerVoiceLine_FromBlueprint(EVexFinalVoiceLineTriggerType TriggerType, bool Force100PercentChance);
    
private:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void SetupVoiceLine(FVexFinalActiveInfo NewActiveInfo);
    
    UFUNCTION(BlueprintCallable)
    void OnVoiceLineEnded(const FString& SubtitleKey);
    
};

