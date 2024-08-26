#pragma once
#include "CoreMinimal.h"
#include "LevelSequenceActor.h"
#include "OnSkipVoteChangedDelegate.h"
#include "GingerbreadLevelSequenceActor.generated.h"

class AGingerbreadPlayerController;

UCLASS(Blueprintable)
class GINGERBREAD_API AGingerbreadLevelSequenceActor : public ALevelSequenceActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSkipVoteChanged OnSkipVoteChanged;
    
    AGingerbreadLevelSequenceActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateVotes(const int32 NumVotes, const int32 VotesMax);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StopCutscene();
    
    UFUNCTION(BlueprintCallable)
    void SkipToEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Server_OnNetworkSkipPressed(AGingerbreadPlayerController* PC);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RunCutscene();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayCutsceneDebug();
    
private:
    UFUNCTION(BlueprintCallable)
    void EnableCutSceneMode();
    
    UFUNCTION(BlueprintCallable)
    void DisableCutSceneMode();
    
};

