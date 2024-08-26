#include "WobbleBlobLargeAnimInstance.h"

UWobbleBlobLargeAnimInstance::UWobbleBlobLargeAnimInstance() {
    this->BlobState = EWobbleBlobBaseAnims::None;
    this->Scale = 0.00f;
    this->MaxGrowAnimationLength = 1.25f;
    this->BlobType = EWobbleBlobBaseType::Standard;
    this->IsMegaBlob = false;
    this->IsInflating = false;
    this->IsDeflating = false;
    this->Burst = false;
    this->Compress = false;
}


