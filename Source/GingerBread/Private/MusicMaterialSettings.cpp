#include "MusicMaterialSettings.h"

FMusicMaterialSettings::FMusicMaterialSettings() {
    this->PulseOnBeat = false;
    this->PulseBeatsPerCycle = 0;
    this->PulseBeatStart = 0;
    this->BeatPulseTimeInBeats = false;
    this->PulseBeatDelay = 0.00f;
    this->BeatPulseCurve = NULL;
    this->PulseOnBar = false;
    this->PulseBarsPerCycle = 0;
    this->PulseBarStart = 0;
    this->BarPulseTimeInBeats = false;
    this->PulseBarDelay = 0.00f;
    this->BarPulseCurve = NULL;
    this->PulseOnMarker = false;
    this->PulseMarkerDelay = 0.00f;
    this->MarkerPulseCurve = NULL;
    this->MaterialParamterTarget = MusicMarkerBehaviourType::HandleAsBeat;
    this->TickUVs = false;
    this->TickUVBeatsPerCycle = 0;
    this->TickUVBeatStart = 0;
    this->UVGridStartX = 0.00f;
    this->UVGridStartY = 0.00f;
    this->UVGridCountX = 0;
    this->UVGridCountY = 0;
    this->UVGridStepX = 0.00f;
    this->UVGridStepY = 0.00f;
    this->UVScaleX = 0.00f;
    this->UVScaleY = 0.00f;
    this->UVGridIndexStart = 0;
    this->MusicMaterialDefinition = NULL;
}

