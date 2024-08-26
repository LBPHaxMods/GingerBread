#pragma once
#include "CoreMinimal.h"
#include "MusicMaterialInstance.h"
#include "MusicMaterialSettings.h"
#include "MusicMaterialPair.generated.h"

USTRUCT(BlueprintType)
struct FMusicMaterialPair {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMusicMaterialSettings Settings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMusicMaterialInstance Instance;
    
    GINGERBREAD_API FMusicMaterialPair();
};

