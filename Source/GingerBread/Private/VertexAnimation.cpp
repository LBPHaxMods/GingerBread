#include "VertexAnimation.h"

UVertexAnimation::UVertexAnimation() {
    this->VertexPositionTexture = NULL;
    this->VertexNormalTexture = NULL;
    this->Speed = 1.00f;
    this->FramesPerSecond = 30.00f;
    this->ClipFrameCount = 0;
    this->ClipVertexCount = 0;
    this->ClipDuration = 0.00f;
}

void UVertexAnimation::SetVertexAnimationPositionTexture(UTexture* Texture) {
}

void UVertexAnimation::SetVertexAnimationNormalTexture(UTexture* Texture) {
}


