#include "StickerBookWidgetInstance.h"

FStickerBookWidgetInstance::FStickerBookWidgetInstance() {
    this->Instance = NULL;
    this->TabType = EStickerBookTabType::Worlds;
    this->IsPageUnknown = false;
    this->PageNumber = 0;
    this->PageIcon = NULL;
    this->RelatedWorld = ELevelType::Himalaya;
}

