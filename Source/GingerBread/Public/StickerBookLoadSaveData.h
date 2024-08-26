#pragma once
#include "CoreMinimal.h"
#include "StickerReferenceSaveKey.h"
#include "StickerBookLoadSaveData.generated.h"

USTRUCT(BlueprintType)
struct FStickerBookLoadSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LastViewedPage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FStickerReferenceSaveKey> UnlockedStickers;
    
    GINGERBREAD_API FStickerBookLoadSaveData();
};

