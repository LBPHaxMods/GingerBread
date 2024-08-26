#pragma once
#include "CoreMinimal.h"
#include "MusicStateTableRow.h"
#include "RhythmicMaterialAkMarkerSettings.generated.h"

USTRUCT(BlueprintType)
struct FRhythmicMaterialAkMarkerSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMusicStateTableRow> ActiveMusicStates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> AkMarkersToListenTo;
    
    GINGERBREAD_API FRhythmicMaterialAkMarkerSettings();
};

