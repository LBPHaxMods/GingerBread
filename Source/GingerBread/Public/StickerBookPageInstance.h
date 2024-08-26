#pragma once
#include "CoreMinimal.h"
#include "StickerBookPageInstance.generated.h"

class UStickerBookPageWidget;
class UTextureRenderTarget2D;

USTRUCT(BlueprintType)
struct FStickerBookPageInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool PageVisible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStickerBookPageWidget* PageWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTextureRenderTarget2D* RenderTarget;
    
    GINGERBREAD_API FStickerBookPageInstance();
};

