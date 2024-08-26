#pragma once
#include "CoreMinimal.h"
#include "GingerbreadManager.h"
#include "RespawnTrackingSettings.h"
#include "Templates/SubclassOf.h"
#include "SackboyRespawnManager.generated.h"

class ASackboy;
class ASackboyRespawnManager;
class ASackboyRespawnVehicle;
class UObject;

UCLASS(Blueprintable)
class ASackboyRespawnManager : public AGingerbreadManager {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ASackboyRespawnVehicle> SpawnVehicleToUse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRespawnTrackingSettings DefaultSackboyTrackingSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRespawnTrackingSettings DefaultVehicleTrackingSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRespawnTrackingSettings DefaultSackboyCollectingSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRespawnTrackingSettings CurrentSackboyTrackingSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRespawnTrackingSettings CurrentVehicleTrackingSettings;
    
    ASackboyRespawnManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetRespawnVehiclePathFinding(bool Enable);
    
    UFUNCTION(BlueprintCallable)
    void RespawnVehicles();
    
    UFUNCTION(BlueprintCallable)
    void RespawnTetheringSackboyOnVehicle(ASackboyRespawnVehicle* VehicleToRespawn);
    
    UFUNCTION(BlueprintCallable)
    void RespawnTetheringSackboy(ASackboy* Sackboy);
    
    UFUNCTION(BlueprintCallable)
    void RespawnAllTetheringSackboys();
    
    UFUNCTION(BlueprintCallable)
    void ResetVehicleTrackingSettingsToDefault();
    
    UFUNCTION(BlueprintCallable)
    void ResetSackboyTrackingSettingsToDefault();
    
    UFUNCTION(BlueprintCallable)
    void OverrideVehicleTrackingSettings(const FRespawnTrackingSettings& TrackingSettings);
    
    UFUNCTION(BlueprintCallable)
    void OverrideSackboyTrackingSettings(const FRespawnTrackingSettings& TrackingSettings);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static ASackboyRespawnManager* GetInstance(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ASackboy* GetFrontFollowSackboy() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAvailableVehicleNum() const;
    
};

