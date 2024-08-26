#pragma once
#include "CoreMinimal.h"
#include "AllPlayerDiedEventDelegate.h"
#include "DoorwaySequenceRequest.h"
#include "ECheckpointSequenceRequest.h"
#include "ESpawnPointType.h"
#include "FadeToBlackEventDelegate.h"
#include "GingerbreadManager.h"
#include "SpawnPointActivationState.h"
#include "CheckpointManager.generated.h"

class ACheckpointManager;
class ASackboy;
class UObject;
class USpawnPointComponent;

UCLASS(Blueprintable)
class ACheckpointManager : public AGingerbreadManager {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DisableMissingCheckpointMessage;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAllPlayerDiedEvent AllPlayersDiedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFadeToBlackEvent FadeToBlackEvent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, ReplicatedUsing=OnRep_ReplicatedActiveSpawnPoint, meta=(AllowPrivateAccess=true))
    USpawnPointComponent* AUTH_CurrentActiveSpawnPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USpawnPointComponent* PreviousActiveSpawnPoint;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SequenceRequest, meta=(AllowPrivateAccess=true))
    ECheckpointSequenceRequest AUTH_SequenceRequest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_DoorwaySequenceRequest, meta=(AllowPrivateAccess=true))
    FDoorwaySequenceRequest AUTH_DoorwaySequenceRequest;
    
public:
    ACheckpointManager(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void StartRespawnSequence();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void StartCheckpointSequence(const UObject* WorldContextObject, ECheckpointSequenceRequest Sequence);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetActiveSpawnPoint(const UObject* WorldContextObject, USpawnPointComponent* SpawnPoint, ASackboy* Sackboy);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_SequenceRequest();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_ReplicatedActiveSpawnPoint();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_DoorwaySequenceRequest();
    
public:
    UFUNCTION(BlueprintCallable)
    bool IsRespawnSequenceReady();
    
    UFUNCTION(BlueprintCallable)
    USpawnPointComponent* GetStartingSpawnPoint();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USpawnPointComponent* GetSpawnPointByName(const UObject* WorldContextObject, const FName spawn_point_name);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool GetLastActivatedSpawnPointState(const UObject* WorldContextObject, ESpawnPointType spawn_point_type, FSpawnPointActivationState& State);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FName GetLastActivatedSpawnPointName(const UObject* WorldContextObject, ESpawnPointType spawn_point_type);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static ACheckpointManager* GetInstance(const UObject* WorldContextObject);
    
};

