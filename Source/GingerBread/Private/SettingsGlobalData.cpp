#include "SettingsGlobalData.h"

FSettingsGlobalData::FSettingsGlobalData() {
    this->RenderOptionNextGenObjects = 0.00f;
    this->RenderQualityPFX = 0.00f;
    this->RenderQualityEffects = 0.00f;
    this->RenderQualityAO = 0.00f;
    this->RenderQualityDLSSQuality = 0.00f;
    this->RenderQualityDLSSSharpness = 0.00f;
    this->RenderOptionDLSS = 0.00f;
    this->RenderQualityPreset = 0.00f;
    this->RenderOptionDynamicLightEffects = 0.00f;
    this->RenderRayTracingShadows = 0.00f;
    this->RenderOptionNextGenVolumetricLights = 0.00f;
    this->RenderOptionSackboyFuzz = 0.00f;
    this->RenderOptionMotionBlur = 0.00f;
    this->BenchmarkPerformed = false;
    this->TelemetryConsent = false;
    this->RenderOptionNextGenHair = 0.00f;
    this->RenderOptionDLSS3 = 0.00f;
    this->RenderOptionReflex = 0.00f;
    this->RenderOptionDLSS3Cached = 0.00f;
    this->MusicVolume = 0.00f;
    this->SFXVolume = 0.00f;
    this->DialogueVolume = 0.00f;
    this->VOFXVolume = 0.00f;
    this->AudioLanguage = EGingerbreadCultureType::English_GB;
    this->TextLanguage = EGingerbreadCultureType::English_GB;
    this->GammaSetting = 0.00f;
    this->HudMovement = false;
    this->CameraShake = false;
    this->SubtitleMode = 0;
    this->SubtitleAlpha = 0.00f;
    this->SubtitleSize = 0;
    this->SubtitleSpeakerStyle = 0;
    this->SubtitleDyslexiaFont = false;
    this->ColourBlindProfileIndex = 0;
    this->TempAASetTo1 = false;
}

