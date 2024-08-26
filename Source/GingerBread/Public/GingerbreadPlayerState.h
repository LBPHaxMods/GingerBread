#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "GameFramework/OnlineReplStructs.h"
#include "EKickReason.h"
#include "EPlayerJoinDirection.h"
#include "GingerbreadPlayerId.h"
#include "PlayerJoinPacket.h"
#include "GingerbreadPlayerState.generated.h"

class ACostumeReplicator;

UCLASS(Blueprintable)
class GINGERBREAD_API AGingerbreadPlayerState : public APlayerState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    ACostumeReplicator* CostumeReplicator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FUniqueNetIdRepl PrimaryPlayerNetId;
    
    UPROPERTY(EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int8 NetPlayerIndex;
    
    UPROPERTY(EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int8 ControllerId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Started, meta=(AllowPrivateAccess=true))
    bool Started;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ReadyForLevel, meta=(AllowPrivateAccess=true))
    bool IsReadyForLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ControllerAssigned, meta=(AllowPrivateAccess=true))
    bool ControllerAssigned;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_PlayerInMenu, meta=(AllowPrivateAccess=true))
    bool IsInMenu;
    
    AGingerbreadPlayerState(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_SingleClientPlayerJoinSync(const FGingerbreadPlayerId& player_id);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_SetPlayerReadyForLevel(bool player_ready, bool player_joined_game, EPlayerJoinDirection last_seen_join_dir);
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SetPlayerInMenu(bool PlayerIsInMenu);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_PlayerJoinSync(FPlayerJoinPacket pjp);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_PlayerJoinRelease();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_PlayerCostumeReadinessOnClient(const FGingerbreadPlayerId& player_id, bool is_ready);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_Started();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ReadyForLevel();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_PlayerInMenu();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ControllerAssigned();
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NotifyClientKicked(EKickReason KickReason);
    
private:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_SetPlayerReadyForLevel(bool player_ready, bool player_joined_game, EPlayerJoinDirection last_seen_join_dir);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_PlayerJoinSync(const FPlayerJoinPacket& pjp);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_PlayerJoinSync(const FGingerbreadPlayerId& player_id, const FPlayerJoinPacket& pjp);
    
};

