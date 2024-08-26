#include "MonorailTrainData.h"

FMonorailTrainData::FMonorailTrainData() {
    this->DistanceFromTrainBehind = 0.00f;
    this->InheritMomentum = false;
    this->ShouldPlayAudio = false;
    this->OverrideAudioStartEvent = NULL;
    this->OverrideAudioStopEvent = NULL;
}

