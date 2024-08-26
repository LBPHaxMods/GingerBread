#include "RuntimeCostumeThumbnailGenerator.h"

ARuntimeCostumeThumbnailGenerator::ARuntimeCostumeThumbnailGenerator(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CaptureTarget = NULL;
    this->FinalRenderTarget = NULL;
    this->RenderTargets[0] = NULL;
    this->RenderTargets[1] = NULL;
}

bool ARuntimeCostumeThumbnailGenerator::SaveCaptureToImageSet(int32 HangerIndex, EThumbnailType ThumbnailType, int32 OutputTextureSize, const FGingerbreadPlayerId& PlayerId) {
    return false;
}

void ARuntimeCostumeThumbnailGenerator::QueueCaptures(const TArray<FName>& ConfigRows, const TArray<FCostumeItemEquipDescriptor>& InCostumeItems, int32 HangerIndex, int32 HangerID, const FGingerbreadPlayerId& PlayerId) {
}

void ARuntimeCostumeThumbnailGenerator::ProcessCaptureQueue() {
}






void ARuntimeCostumeThumbnailGenerator::LoadAfterCapture(bool Enable) {
}

bool ARuntimeCostumeThumbnailGenerator::IsReady() {
    return false;
}

bool ARuntimeCostumeThumbnailGenerator::IsIdle() {
    return false;
}

void ARuntimeCostumeThumbnailGenerator::InitRenderResources() {
}

UTextureRenderTarget2D* ARuntimeCostumeThumbnailGenerator::GetFinalCapture() {
    return NULL;
}

void ARuntimeCostumeThumbnailGenerator::CostumeEquipped() {
}

void ARuntimeCostumeThumbnailGenerator::ClearCaptureQueue() {
}

void ARuntimeCostumeThumbnailGenerator::CaptureAndProcessScene(int32 FinalCaptureSize) {
}


