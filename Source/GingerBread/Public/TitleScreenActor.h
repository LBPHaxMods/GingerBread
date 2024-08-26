#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "Engine/DataTable.h"
#include "TitleScreenActor.generated.h"

class ACheckpoint;
class AGingerbreadLevelSequenceActor;
class ULevelSequence;
class USpawnPointComponent;

UCLASS(Blueprintable)
class ATitleScreenActor : public AActor {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FTriggerDecorations);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath LoomCutsceneLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGingerbreadLevelSequenceActor* SequenceActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGingerbreadLevelSequenceActor* World6SequenceActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float World6LoadDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACheckpoint* CheckpointActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ULevelSequence*> LevelSequences;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULevelSequence* ClientIntroSequences;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle LastLevelHandle;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTriggerDecorations TriggerDecorations;
    
    ATitleScreenActor(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void StartWorld6Sequence();
    
    UFUNCTION(BlueprintCallable)
    void StartIntroSequence();
    
    UFUNCTION(BlueprintCallable)
    void ShowButtonPrompt();
    
public:
    UFUNCTION(BlueprintCallable)
    void ShowBasicLoadingScreen(bool Show);
    
    UFUNCTION(BlueprintCallable)
    void PostSpawn(USpawnPointComponent* SpawnPoint, bool first_time);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnWorld6PostUnlock();
    
    UFUNCTION(BlueprintCallable)
    void OnWorld6PostCutscene();
    
    UFUNCTION(BlueprintCallable)
    void OnWorld6BeginLoad();
    
    UFUNCTION(BlueprintCallable)
    void OnIntroSequenceFinished();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasCompletedFinalLevel() const;
    
};

