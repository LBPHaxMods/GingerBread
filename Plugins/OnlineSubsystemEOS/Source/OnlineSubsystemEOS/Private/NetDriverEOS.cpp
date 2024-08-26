#include "NetDriverEOS.h"

UNetDriverEOS::UNetDriverEOS() : UIpNetDriver(FObjectInitializer::Get()) {
    this->ChannelDefinitions.AddDefaulted(4);
    this->bIsPassthrough = false;
    this->bIsUsingP2PSockets = true;
}


