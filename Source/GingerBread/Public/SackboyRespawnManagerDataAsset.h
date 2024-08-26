#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "RespawnTrackingSettings.h"
#include "Templates/SubclassOf.h"
#include "SackboyRespawnManagerDataAsset.generated.h"

class ASackboyRespawnVehicle;

UCLASS(Blueprintable)
class USackboyRespawnManagerDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ASackboyRespawnVehicle> SpawnVehicleToUse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRespawnTrackingSettings DefaultSackboyTrackingSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRespawnTrackingSettings DefaultVehicleTrackingSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRespawnTrackingSettings CurrentSackboyTrackingSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRespawnTrackingSettings CurrentVehicleTrackingSettings;
    
    USackboyRespawnManagerDataAsset();

};

