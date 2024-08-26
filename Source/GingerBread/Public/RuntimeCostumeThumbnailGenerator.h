#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CostumeItemEquipDescriptor.h"
#include "EThumbnailType.h"
#include "GingerbreadPlayerId.h"
#include "ThumbnailPixelProcessor.h"
#include "RuntimeCostumeThumbnailGenerator.generated.h"

class UTextureRenderTarget2D;

UCLASS(Blueprintable)
class ARuntimeCostumeThumbnailGenerator : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FThumbnailPixelProcessor> ThumbnailPixelProcessors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTextureRenderTarget2D* CaptureTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTextureRenderTarget2D* FinalRenderTarget;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTextureRenderTarget2D* RenderTargets[2];
    
    ARuntimeCostumeThumbnailGenerator(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool SaveCaptureToImageSet(int32 HangerIndex, EThumbnailType ThumbnailType, int32 OutputTextureSize, const FGingerbreadPlayerId& PlayerId);
    
    UFUNCTION(BlueprintCallable)
    void QueueCaptures(const TArray<FName>& ConfigRows, const TArray<FCostumeItemEquipDescriptor>& InCostumeItems, int32 HangerIndex, int32 HangerID, const FGingerbreadPlayerId& PlayerId);
    
    UFUNCTION(BlueprintCallable)
    void ProcessCaptureQueue();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetupCaptureFromConfig(const FName& ConfigRow);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSaveCapture(const FName& ConfigRow, int32 HangerIndex, const FGingerbreadPlayerId& PlayerId);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPerformCapture(const FName& ConfigRow, int32 HangerIndex, const FGingerbreadPlayerId& PlayerId);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEnabled(bool IsEnabled);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCaptureQueueComplete(int32 HangerIndex, const FGingerbreadPlayerId& PlayerId);
    
    UFUNCTION(BlueprintCallable)
    void LoadAfterCapture(bool Enable);
    
    UFUNCTION(BlueprintCallable)
    bool IsReady();
    
    UFUNCTION(BlueprintCallable)
    bool IsIdle();
    
    UFUNCTION(BlueprintCallable)
    void InitRenderResources();
    
    UFUNCTION(BlueprintCallable)
    UTextureRenderTarget2D* GetFinalCapture();
    
    UFUNCTION(BlueprintCallable)
    void CostumeEquipped();
    
    UFUNCTION(BlueprintCallable)
    void ClearCaptureQueue();
    
    UFUNCTION(BlueprintCallable)
    void CaptureAndProcessScene(int32 FinalCaptureSize);
    
};

