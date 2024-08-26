#include "GingerbreadSoftImage.h"

UGingerbreadSoftImage::UGingerbreadSoftImage() {
    this->bIsVolatile = true;
    this->DisplaysLoadingWidget = true;
    this->CustomLoadingWidgetClass = NULL;
    this->DereferencingDelay = 1.00f;
    this->AssetLoadPriority = 0;
    this->CustomLoadingWidget = NULL;
}

void UGingerbreadSoftImage::SetOpacity(float InOpacity) {
}

void UGingerbreadSoftImage::SetColorAndOpacity(FLinearColor InColorAndOpacity) {
}

void UGingerbreadSoftImage::SetBrushFromTextureMaterialParameter(TSoftObjectPtr<UTexture2D> Texture, UMaterialInterface* Material, FName ParameterName) {
}

void UGingerbreadSoftImage::SetBrushFromTextureDynamic(UTexture2DDynamic* Texture, bool bMatchSize) {
}

void UGingerbreadSoftImage::SetBrushFromTexture(UTexture2D* Texture, bool bMatchSize) {
}

void UGingerbreadSoftImage::SetBrushFromSoftAsset(TSoftObjectPtr<UObject> SoftAsset) {
}

void UGingerbreadSoftImage::SetBrushFromMaterial(UMaterialInterface* Material) {
}

void UGingerbreadSoftImage::SetBrushFromAsset(USlateBrushAsset* Asset) {
}

void UGingerbreadSoftImage::SetBrush(const FSlateBrush& InBrush) {
}

bool UGingerbreadSoftImage::IsAssetPending() const {
    return false;
}

bool UGingerbreadSoftImage::IsAssetLoading() const {
    return false;
}

bool UGingerbreadSoftImage::IsAssetLoaded() const {
    return false;
}

bool UGingerbreadSoftImage::HasDynamicMaterial() const {
    return false;
}

UMaterialInstanceDynamic* UGingerbreadSoftImage::GetDynamicMaterial() {
    return NULL;
}


