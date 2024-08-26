#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "BonusLevelScoreData.h"
#include "BonusRoomManagerDisplayScoreEventDelegate.h"
#include "BonusRoomManagerPrizeTriggeredDelegate.h"
#include "BonusRoomManagerTimerEventDelegate.h"
#include "BonusRoomTableRow.h"
#include "Templates/SubclassOf.h"
#include "PlayerCountActor.h"
#include "BonusRoomManager.generated.h"

class AActor;
class ABonusRoomManager;
class ACameraArea;
class AGingerbreadLevelSequenceActor;
class ANPCBase;
class UAkAudioEvent;
class UAnimMontage;
class UBillboardComponent;
class UBonusTimerHUDComponent;
class UObject;

UCLASS(Abstract, Blueprintable)
class ABonusRoomManager : public APlayerCountActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBillboardComponent* BillboardComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AGingerbreadLevelSequenceActor> CutsceneController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ACameraArea> CutsceneCameraArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ANPCBase> NPC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle GameDataTableRow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<AActor>> PrizeTriggers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<AActor>> ActivateOnGameStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<AActor>> ActivateOnHurryUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<AActor>> DeactivateOnHurryUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<AActor>> DeactivateOnTimeUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* NPCFirstPlayIntroMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* NPCFirstPlayHalfWayMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* NPCFirstPlayHurryUpMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* NPCFirstPlayTimeUpMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> NPCIntroMontages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> NPCHalfWayMontages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> NPCHurryUpMontages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> NPCTimeUpMontages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HurryUpDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IntroSequenceDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimerStartDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UBonusTimerHUDComponent> BonusTimerHUDComponentClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BonusTimerHUDScreenName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* SoundBed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SoundBedGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SoundBedLoopState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SoundBedEndState;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBonusRoomManagerDisplayScoreEvent UpdateBonusRoomScores;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBonusRoomManagerTimerEvent OnHalfWayReached;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBonusRoomManagerTimerEvent OnHurryUpReached;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBonusRoomManagerTimerEvent OnTimeUpReached;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBonusRoomManagerPrizeTriggered OnPrizeTriggered;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float ReplicatedTotalGameDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ReplicatedGameStartTimestamp, meta=(AllowPrivateAccess=true))
    float ReplicatedGameStartTimestamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float ReplicatedGameEndDelay;
    
public:
    ABonusRoomManager(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void Server_PopupateBonusScoreList();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void RPC_StartGameAtTimestamp(float GameStartTimestamp, float TotalGameDuration);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void RPC_InternalTimeUpReached();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void RPC_InternalHurryUpReached();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void RPC_InternalHalfWayReached();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ReplicatedGameStartTimestamp();
    
    UFUNCTION(BlueprintCallable)
    void OnIntroCutsceneStarted();
    
    UFUNCTION(BlueprintCallable)
    void OnHUDEndSequenceFinished();
    
    UFUNCTION(BlueprintCallable)
    void OnCutsceneManagerAvailable(AActor* pManagerActor);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulticast_DisplayBonusRoomScores(const TArray<FBonusLevelScoreData>& Scorelist);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetGameTimeRemainingAsRatio() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetGameTimeRemaining() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FBonusLevelScoreData> GetBonusScoreData() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FBonusRoomTableRow GetBonusRoomTableRow();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static ABonusRoomManager* GetBonusRoomManager(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    void EDITOR_CopyProperties(TSoftObjectPtr<AGingerbreadLevelSequenceActor> InCutsceneController, TSoftObjectPtr<ACameraArea> InCutsceneCameraArea, TSoftObjectPtr<ANPCBase> InNPC, FName InGameDataTableRowName, const TArray<TSoftObjectPtr<AActor>>& InPrizeTriggers, const TArray<TSoftObjectPtr<AActor>>& InActivateOnGameStart, const TArray<TSoftObjectPtr<AActor>>& InActivateOnHurryUp, const TArray<TSoftObjectPtr<AActor>>& InDeactivateOnHurryUp, const TArray<TSoftObjectPtr<AActor>>& InDeactivateOnTimeUp, const TArray<UAnimMontage*>& InNPCIntroMontages, const TArray<UAnimMontage*>& InNPCHalfWayMontages, const TArray<UAnimMontage*>& InNPCHurryUpMontages, const TArray<UAnimMontage*>& InNPCTimeUpMontages);
    
protected:
    UFUNCTION(BlueprintCallable)
    void DisableCutsceneCameraArea();
    
    UFUNCTION(BlueprintCallable)
    void AUTH_TriggerPrize();
    
    UFUNCTION(BlueprintCallable)
    void AUTH_StartPrizeTimer();
    
    UFUNCTION(BlueprintCallable)
    void AUTH_SkipIntroCutscene();
    
    UFUNCTION(BlueprintCallable)
    void AUTH_PlayIntroMontage();
    
    UFUNCTION(BlueprintCallable)
    void AUTH_OnTrackedPrizeDestroyed(AActor* pTrackedPrize);
    
    UFUNCTION(BlueprintCallable)
    void AUTH_OnIntroCutsceneFinished();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AreBonusScoresReady() const;
    
};

