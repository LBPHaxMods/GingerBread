#pragma once
#include "CoreMinimal.h"
#include "MusicMaterialInstance.h"
#include "MusicMaterialSettings.h"
#include "ManualMusicMaterialMapping.generated.h"

USTRUCT(BlueprintType)
struct FManualMusicMaterialMapping {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMusicMaterialSettings MusicSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMusicMaterialInstance Instance;
    
    GINGERBREAD_API FManualMusicMaterialMapping();
};

