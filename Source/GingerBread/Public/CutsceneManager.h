#pragma once
#include "CoreMinimal.h"
#include "CutsceneControllerInfo.h"
#include "CutsceneManagerEventDelegate.h"
#include "GingerbreadManager.h"
#include "CutsceneManager.generated.h"

class ACutsceneManager;
class AGingerbreadLevelSequenceActor;
class UObject;

UCLASS(Blueprintable)
class ACutsceneManager : public AGingerbreadManager {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCutsceneManagerEvent CutscenePreStartEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCutsceneManagerEvent CutsceneStartEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCutsceneManagerEvent CutsceneFinishEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCutsceneManagerEvent OnPlayerCountChanged;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsRunningCutscene, meta=(AllowPrivateAccess=true))
    bool Rep_IsRunningCutscene;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FCutsceneControllerInfo Rep_CurrentCutsceneController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ExpiredCutsceneControllers, meta=(AllowPrivateAccess=true))
    TArray<FCutsceneControllerInfo> Rep_ExpiredCutsceneControllers;
    
public:
    ACutsceneManager(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void StartCutscene(AGingerbreadLevelSequenceActor* CutsceneController, FName CutsceneTriggersTag, FName CutsceneActorsTag, bool IsDebug);
    
    UFUNCTION(BlueprintCallable)
    void SetLeaveCutsceneBarsUp();
    
private:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void OnRunCutsceneRPC(bool IsRunning, float StartTime);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IsRunningCutscene();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ExpiredCutsceneControllers();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnLoadingScreenTransitionStart();
    
    UFUNCTION(BlueprintCallable)
    void OnLoadingScreenTransitionFinish();
    
    UFUNCTION(BlueprintCallable)
    void OnCutsceneFinish(AGingerbreadLevelSequenceActor* CutsceneController);
    
    UFUNCTION(BlueprintCallable)
    bool LoadScreenIsCutsceneReadyToPlay();
    
    UFUNCTION(BlueprintCallable)
    bool IsCutsceneSkipEnabled();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static ACutsceneManager* GetInstance(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    void EnableCutsceneSkip();
    
    UFUNCTION(BlueprintCallable)
    void DisableCutsceneSkip();
    
    UFUNCTION(BlueprintCallable)
    void DisableCameraCuts();
    
};

