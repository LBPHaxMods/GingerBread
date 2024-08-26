#include "RhythmicMotionKeyframe.h"

FRhythmicMotionKeyframe::FRhythmicMotionKeyframe() {
    this->TriggerOnAkMarker = false;
    this->Beat = 0.00f;
    this->Duration = 0.00f;
    this->MotionCurve = NULL;
    this->ApplyActorTransform = false;
    this->AudioAkEvent = NULL;
    this->HapticsAkEvent = NULL;
    this->bAudioPlaysOnce = false;
}

