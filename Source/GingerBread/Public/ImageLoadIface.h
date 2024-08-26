#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ImageLoadIface.generated.h"

class UTexture;

UINTERFACE(Blueprintable)
class UImageLoadIface : public UInterface {
    GENERATED_BODY()
};

class IImageLoadIface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ImageLoaded(const FName& image_id, UTexture* Texture);
    
};

