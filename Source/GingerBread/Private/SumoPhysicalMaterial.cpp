#include "SumoPhysicalMaterial.h"

USumoPhysicalMaterial::USumoPhysicalMaterial() {
    this->AudioMaterial = TEXT("cardboard");
    this->AudioDensity = 1.00f;
    this->ObjectAudioMaterial = EObjectMaterial::PlantableSeed;
    this->SurfaceAudioMaterial = ESurfaceMaterial::Default;
    this->bUseObjectMaterial = false;
    this->FootstepDensity = ECostumeFSTDensity::Soft;
}


