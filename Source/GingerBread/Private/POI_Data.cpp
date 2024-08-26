#include "POI_Data.h"

FPOI_Data::FPOI_Data() {
    this->Importance = 0.00f;
    this->DistanceWeightage = 0.00f;
    this->AngularHeightWeightage = 0.00f;
    this->DirectionWeightage = 0.00f;
    this->TravelDirectionWeightage = 0.00f;
    this->SpeedWeightage = 0.00f;
    this->Emotion_State = ESackboyEmotionalState::Neutral;
    this->Emotion_Priority = 0.00f;
    this->Emotion_Level = 0;
}

