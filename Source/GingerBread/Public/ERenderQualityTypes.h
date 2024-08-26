#pragma once
#include "CoreMinimal.h"
#include "ERenderQualityTypes.generated.h"

UENUM(BlueprintType)
enum class ERenderQualityTypes : uint8 {
    RenderQualityPreset,
    RenderOptionNextGenObjects,
    RenderOptionVariableStep,
    RenderOptionVSync,
    RenderQualityPFX,
    RenderQualityShadows,
    RenderQualityAA,
    RenderQualityUpscaling,
    RenderQualityTexture,
    RenderQualityEffects,
    RenderQualityAO,
    RenderQualityDLSSQuality,
    RenderQualityDLSSSharpness,
    RenderOptionDLSS,
    AudioOptionDevice,
    RenderOptionDynamicLightEffects,
    RenderRayTracingShadows,
    RenderOptionNextGenVolumetricLights,
    RenderOptionSackboyFuzz,
    MicOptionDevice,
    RenderOptionNextGenHair,
    RenderOptionDLSS3,
    RenderOptionReflex,
    RenderOptionDLSS3Cached,
    COUNT,
};

