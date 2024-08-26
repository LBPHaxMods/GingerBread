#pragma once
#include "CoreMinimal.h"
#include "StickerReferenceSaveKey.h"
#include "CPE_StickerBookLoadSaveData.generated.h"

USTRUCT(BlueprintType)
struct FCPE_StickerBookLoadSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LastViewedPage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FStickerReferenceSaveKey> UnlockedStickers;
    
    GINGERBREAD_API FCPE_StickerBookLoadSaveData();
};

