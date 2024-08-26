#include "VertexAnimationClip.h"

FVertexAnimationClip::FVertexAnimationClip() {
    this->Animation = NULL;
    this->LoopMode = EVALoopMode::DontLoop;
    this->PlayInReverse = false;
    this->NumLoops = 0;
    this->Speed = 0.00f;
    this->AutoNextClip = false;
}

