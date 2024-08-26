#include "CostumeSettings.h"

UCostumeSettings::UCostumeSettings() {
    this->CostumeSystemEnabled = false;
    this->CostumeItemTable = NULL;
    this->CostumeTable = NULL;
    this->ColourTintTable = NULL;
    this->SackboySkeleton = NULL;
    this->ThumbnailFormat = TEXT("{0}_{1}");
    this->ImageCacheImageKey = TEXT("{0}-{1}");
    this->TransientThumbnailName = TEXT("{0}-{1}");
    this->TransientThumbnailPath = TEXT("/Engine/Transient.{0}-{1}");
    this->DefaultCostume = TEXT("Default");
}


