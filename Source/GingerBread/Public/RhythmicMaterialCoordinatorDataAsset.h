#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "RhythmicMaterialAkMarkerSettings.h"
#include "RhythmicMaterialCoordinatorDataAsset.generated.h"

UCLASS(Blueprintable)
class URhythmicMaterialCoordinatorDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRhythmicMaterialAkMarkerSettings> AkMarkerSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IgnoreMusicStatesForAkMarkers;
    
    URhythmicMaterialCoordinatorDataAsset();

};

