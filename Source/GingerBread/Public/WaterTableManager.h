#pragma once
#include "CoreMinimal.h"
#include "EHitPointsBoundsUpdateMode.h"
#include "EWaterTableDirection.h"
#include "GingerbreadManager.h"
#include "WaterTableCallbackData.h"
#include "WaterTableManager.generated.h"

class AWaterBase;
class AWaterTableManager;
class UObject;

UCLASS(Blueprintable)
class GINGERBREAD_API AWaterTableManager : public AGingerbreadManager {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool OverrideHitPointsBoundsUpdateMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHitPointsBoundsUpdateMode HitPointsBoundsUpdateMode;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_CurrentWaterObject, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AWaterBase> CurrentWaterObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_CurrentWaterObjectStartingHeight, meta=(AllowPrivateAccess=true))
    float CurrentWaterObjectStartingHeight;
    
public:
    AWaterTableManager(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SetNoActiveWaterObject();
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentHeightFromObject(const AWaterBase* WaterObject, const float NewHeight);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentHeight(const float NewHeight);
    
    UFUNCTION(BlueprintCallable)
    void SetActiveWaterObject(AWaterBase* WaterObject, const float StartingHeight);
    
    UFUNCTION(BlueprintCallable)
    void RemoveCallback(const FWaterTableCallbackData& Callback);
    
    UFUNCTION(BlueprintCallable)
    void RegisterWaterObject(AWaterBase* WaterObject);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentWaterObjectStartingHeight();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentWaterObject();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AWaterTableManager* GetWaterTableManager(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EWaterTableDirection GetDirection() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentHeight() const;
    
    UFUNCTION(BlueprintCallable)
    void AddCallback(const FWaterTableCallbackData& Callback);
    
};

