#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EquippedCostumeData.h"
#include "GingerbreadPlayerId.h"
#include "CostumeReplicator.generated.h"

class ACostumeReplicator;
class UObject;

UCLASS(Blueprintable)
class GINGERBREAD_API ACostumeReplicator : public AActor {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPlayerCostumeSelectScreenStateChanged, FGingerbreadPlayerId, PlayerId, uint8, ScreenState);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPlayerCostumeSelectDataChanged, FGingerbreadPlayerId, PlayerId, FEquippedCostumeData, CostumeItems);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FCostumeShopPlayerReadyChanged, FGingerbreadPlayerId, PlayerId, bool, IsReady);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerCostumeSelectDataChanged OnCostumeSelectDataChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerCostumeSelectScreenStateChanged OnCostumeSelectScreenStateChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCostumeShopPlayerReadyChanged OnCostumeShopPlayerReadyChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool ReadyOnAllClients;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CostumeSelectDataChanged, meta=(AllowPrivateAccess=true))
    FEquippedCostumeData CostumeSelectData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FEquippedCostumeData Rep_CostumeSelectData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CostumeSelectScreenStateChanged, meta=(AllowPrivateAccess=true))
    uint8 CostumeSelectScreenState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CostumeShopReadyChanged, meta=(AllowPrivateAccess=true))
    bool CostumeShopReady;
    
public:
    ACostumeReplicator(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SetCostumeShopReady(bool IsReady);
    
    UFUNCTION(BlueprintCallable)
    void SetCostumeSelectScreenState(uint8 ScreenState);
    
    UFUNCTION(BlueprintCallable)
    void SetCostumeSelectData(const FEquippedCostumeData& CostumeData);
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void SERVER_SetCostumeShopReady(bool IsReady);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void SERVER_SendCostumeSelectScreenState(uint8 ScreenState);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void SERVER_SendCostumeSelectData(const FEquippedCostumeData CostumeData);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CostumeShopReadyChanged();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CostumeSelectScreenStateChanged();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CostumeSelectDataChanged();
    
    UFUNCTION(BlueprintCallable)
    void OnMeshCreated(const FGingerbreadPlayerId& PlayerId);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnDLCChanged();
    
    UFUNCTION(BlueprintCallable)
    bool IsCostumeSetup(const FEquippedCostumeData& EquippedCostumeData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCostumeShopReady() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FEquippedCostumeData GetCostumeSelectData() const;
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static ACostumeReplicator* GetCostumeReplicator(const FGingerbreadPlayerId& PlayerId, const UObject* WorldContextObject);
    
};

