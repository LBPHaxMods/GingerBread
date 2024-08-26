#pragma once
#include "CoreMinimal.h"
#include "ENaomiMusicState.h"
#include "NaomiServerMusicData.generated.h"

USTRUCT(BlueprintType)
struct FNaomiServerMusicData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentPhase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENaomiMusicState MusicState;
    
    GINGERBREAD_API FNaomiServerMusicData();
};

