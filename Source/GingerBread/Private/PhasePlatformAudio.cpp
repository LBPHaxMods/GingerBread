#include "PhasePlatformAudio.h"

FPhasePlatformAudio::FPhasePlatformAudio() {
    this->bIsAudioEnabled = false;
    this->NormalMaximumIntensity = 0;
    this->InverseMaximumIntensity = 0;
    this->MaxFrameSphereBoxTestCount = 0;
    this->MaxFramePointCount = 0;
    this->LightRadiusRangeCm = 0.00f;
    this->AudioCullDistanceCm = 0.00f;
    this->IntensityAveragedFrameCount = 0;
    this->AverageSoundIntensity = 0.00f;
    this->IntensitySampleIndex = 0;
    this->debugSphereSize = 0.00f;
    this->debugSphereLineWidth = 0.00f;
    this->debugSphereSegments = 0;
    this->bForceSingleThread = false;
    this->bShowPointCounts = false;
    this->bShowAffectedPoints = false;
    this->bShowDuplicateTestedPoints = false;
    this->bShowAffectedOctree = false;
    this->bShowOctreeUpdate = false;
    this->bShowAllOctreeBoxes = false;
    this->bShowAllOctreePoints = false;
    this->bShowPhaseLightSpheres = false;
    this->lightBoxLineWidth = 0.00f;
    this->TotalPointCount = 0;
}

