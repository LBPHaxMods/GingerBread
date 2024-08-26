#pragma once

#include "CoreMinimal.h"
#include "ELevelObjectTrackerEvent.h"
#include "HitPointModifyResult.h"
#include "LevelObjectEventTrackerCompleteDelegate.h"
#include "LevelObjectEventTrackerCountChangedDelegate.h"
#include "LevelObjectEventTrackerProgressToEventDelegate.h"
#include "WakeSleep.h"
#include "PlayerCountActor.h"
#include "LevelObjectEventTracker.generated.h"

class AActor;
class ASlapBolt;
class UBillboardComponent;
class USceneComponent;
class UTriggerActorComponent;

UCLASS(Blueprintable)
class ALevelObjectEventTracker : public APlayerCountActor, public IWakeSleep {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLevelObjectEventTrackerComplete OnComplete;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLevelObjectEventTrackerCountChanged OnCountChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLevelObjectEventTrackerProgressToEvent OnProgressToEvent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* SceneComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBillboardComponent* BillboardComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTriggerActorComponent* TriggerActorComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELevelObjectTrackerEvent EventType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_RequiredTotal, meta=(AllowPrivateAccess=true))
    int32 Server_RequiredCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> OfflineBoundActors;
    
public:
    ALevelObjectEventTracker(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void OnSlapBoltSlapped(ASlapBolt* SlapBolt);
    
    UFUNCTION(BlueprintCallable)
    void OnSlapBoltReleased(ASlapBolt* SlapBolt);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_RequiredTotal();
    
private:
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void Multicast_OnProgressToEvent();
    
    UFUNCTION(BlueprintCallable)
    void HandleActorPostModificationAttempt(const FHitPointModifyResult& Result);
    
public:
    UFUNCTION(BlueprintCallable)
    void AddTrackedActors(TArray<AActor*> ActorsToTrack);
    

    // Fix for true pure virtual functions not being implemented
};

