#pragma once
#include "CoreMinimal.h"
#include "GingerbreadHUDComponent.h"
#include "QuickSelectHudComponent.generated.h"

class UTexture2D;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UQuickSelectHudComponent : public UGingerbreadHUDComponent {
    GENERATED_BODY()
public:
    UQuickSelectHudComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void GetPromotionalImages(TArray<TSoftObjectPtr<UTexture2D>>& OutPromotionImages);
    
};

