#pragma once
#include "CoreMinimal.h"
#include "GingerbreadHUDComponent.h"
#include "ScreenBlurHUDComponent.generated.h"

class UGingerbreadWidget;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UScreenBlurHUDComponent : public UGingerbreadHUDComponent {
    GENERATED_BODY()
public:
    UScreenBlurHUDComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RequestBlurFromWidget(UGingerbreadWidget* RequestWidget, bool Enabled);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RequestBlur(UGingerbreadHUDComponent* HUDComponent, bool Enabled);
    
};

