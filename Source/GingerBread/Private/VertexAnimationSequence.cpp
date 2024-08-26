#include "VertexAnimationSequence.h"

UVertexAnimationSequence::UVertexAnimationSequence() {
    this->SequenceSpeedMultiplier = 1.00f;
    this->DefaultStaticMesh = NULL;
    this->Source = NULL;
}

int32 UVertexAnimationSequence::GetNumClips() const {
    return 0;
}


