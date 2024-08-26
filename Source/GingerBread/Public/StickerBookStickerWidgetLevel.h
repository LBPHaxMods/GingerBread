#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ELevelStickerBookSticker_UnlockType.h"
#include "StickerBookStickerWidget.h"
#include "StickerBookStickerWidgetLevel.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UStickerBookStickerWidgetLevel : public UStickerBookStickerWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELevelStickerBookSticker_UnlockType UnlockType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle LevelRow;
    
public:
    UStickerBookStickerWidgetLevel();

};

