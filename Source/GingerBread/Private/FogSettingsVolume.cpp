#include "FogSettingsVolume.h"
#include "Atmosphere/AtmosphericFogComponent.h"
#include "Components/ExponentialHeightFogComponent.h"

AFogSettingsVolume::AFogSettingsVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->OriginalExponentialHeightFogComponent = CreateDefaultSubobject<UExponentialHeightFogComponent>(TEXT("MyOriginalHeightFogComponent1"));
    this->OriginalAtmosphericFogComponent = CreateDefaultSubobject<UAtmosphericFogComponent>(TEXT("MyOriginalAtmosphericFogComponent1"));
    this->ExponentialHeightFog = NULL;
    this->AtmosphericFog = NULL;
    this->BlendRadius = 10.00f;
    this->BlendWeight = 0.00f;
    this->ExponentialHeightFogComponent = CreateDefaultSubobject<UExponentialHeightFogComponent>(TEXT("MyHeightFogComponent0"));
    this->AtmosphericFogComponent = CreateDefaultSubobject<UAtmosphericFogComponent>(TEXT("MyAtmosphericFogComponent0"));
    this->FogSettingsVolumeVersion = 1;
}


