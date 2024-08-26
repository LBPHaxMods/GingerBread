#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EVexFinalVoiceLineTriggerType.h"
#include "EVexFinalVoiceLineType.h"
#include "VexFinalMeshActor.generated.h"

class AVexFinalEncounter;
class USceneComponent;
class USkeletalMeshComponent;
class UVexFinalActionComponent;

UCLASS(Abstract, Blueprintable)
class AVexFinalMeshActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* SceneRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* MeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVexFinalActionComponent* VexFinalActionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AVexFinalEncounter* Vex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseFistAttackAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseSlapAttackAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseOutOfStunSlapAttackAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseTricksterAttackAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseItemAttackAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseBombSpamAttackAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FistAttackAnimTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SlapAttackAnimTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OutOfStunAttackAnimTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TricksterAttackAnimTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ItemAttackAnimTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BombSpamAttackAnimTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HitReactionNormalTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HitReactionStunnedTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HitReactionBombTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FloorBreakAnimTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WallBreakAnimTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool IsMeshActorActive;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsHidden, meta=(AllowPrivateAccess=true))
    bool IsHidden;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ActiveVoiceLine, meta=(AllowPrivateAccess=true))
    EVexFinalVoiceLineType ActiveVoiceLine;
    
public:
    AVexFinalMeshActor(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void PlayAdditiveAnimation(float Timestamp);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnWallBreak();
    
    UFUNCTION(BlueprintCallable)
    void OnVoiceLinePlayed(EVexFinalVoiceLineType VoiceLineType, bool FullBodyAnim);
    
    UFUNCTION(BlueprintCallable)
    void OnVoiceLineEnded(EVexFinalVoiceLineTriggerType TriggerType, bool WasInterrupted, bool FullBodyAnim);
    
    UFUNCTION(BlueprintCallable)
    void OnVexVanishStarted();
    
    UFUNCTION(BlueprintCallable)
    void OnVexVanishFinished();
    
    UFUNCTION(BlueprintCallable)
    void OnVexStunUpdated(bool InIsStunned);
    
    UFUNCTION(BlueprintCallable)
    void OnVexRevealStarted();
    
    UFUNCTION(BlueprintCallable)
    void OnVexRevealFinished();
    
    UFUNCTION(BlueprintCallable)
    void OnVexHitByBomb();
    
    UFUNCTION(BlueprintCallable)
    void OnVexFightStarted();
    
    UFUNCTION(BlueprintCallable)
    void OnVexDefeatedFinished();
    
    UFUNCTION(BlueprintCallable)
    void OnVexDefeated();
    
    UFUNCTION(BlueprintCallable)
    void OnVexDamaged();
    
    UFUNCTION(BlueprintCallable)
    void OnTricksterAttack();
    
    UFUNCTION(BlueprintCallable)
    void OnSlapAttack(bool OutOfStun);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_IsHidden();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ActiveVoiceLine();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnItemAttack();
    
    UFUNCTION(BlueprintCallable)
    void OnFloorBreak();
    
    UFUNCTION(BlueprintCallable)
    void OnFistAttack();
    
    UFUNCTION(BlueprintCallable)
    void OnBombSpamAttack();
    
private:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void ClearAdditiveAnimation(float Timestamp);
    
};

