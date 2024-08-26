#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "Components/WidgetComponent.h"
#include "OnInitialisedWidgetFinishedDelegate.h"
#include "WidgetComponentMimicSettings.h"
#include "GingerbreadWidgetComponent.generated.h"

class AGingerbreadHUD;
class UGingerbreadScreen;
class UHudStaticMeshComponent;
class UMaterialInterface;
class UStaticMesh;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UGingerbreadWidgetComponent : public UWidgetComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* MimicMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* MimicMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MimicTextureParamName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MimicTintParamName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MimicOpacityParamName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLightingChannels MimicLightingChannels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWidgetComponentMimicSettings> MimicInstanceSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName OwningScreenName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DisallowLayeringOnTop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WidgetDilation;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInitialisedWidgetFinished OnInitialisedWidgetFinished;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UHudStaticMeshComponent*> MimicInstances;
    
public:
    UGingerbreadWidgetComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetWidgetDilation(float NewDilation);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPreVisibilityChange(bool NewVisibility);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInitialiseWidget_BlueprintEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UGingerbreadScreen* GetOwningScreen() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AGingerbreadHUD* GetHUD() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool DisallowsLayering() const;
    
};

