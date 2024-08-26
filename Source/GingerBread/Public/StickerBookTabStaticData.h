#pragma once
#include "CoreMinimal.h"
#include "StickerbookPageStaticData.h"
#include "StickerBookTabStaticData.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FStickerBookTabStaticData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* TabIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FStickerbookPageStaticData> TabPages;
    
    GINGERBREAD_API FStickerBookTabStaticData();
};

