#include "ImageData.h"

FImageData::FImageData() {
    this->SurfaceWidth = 0;
    this->SurfaceHeight = 0;
    this->PixelTypeSize = 0;
    this->PixelFormat = PF_Unknown;
    this->TextureSizeBytes = 0;
    this->DiscardedAlpha = false;
}

