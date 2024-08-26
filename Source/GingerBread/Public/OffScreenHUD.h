#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GingerbreadHUDComponent.h"
#include "OffScreenHUD.generated.h"

class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UOffScreenHUD : public UGingerbreadHUDComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName IndicatorsOrderedPanelContainerName;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FName WidgetName_OffScreenIndicators[4];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PaddingPercentage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D OffScreenIndicatorOriginalSize;
    
    UOffScreenHUD(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnShowOffScreen(bool Show, FVector OffScreenWorldPosition);
    
    UFUNCTION(BlueprintCallable)
    void OnAppearanceManagerSync(AActor* GameStateActor);
    
    UFUNCTION(BlueprintCallable)
    void OnAppearanceManagerReady();
    
};

