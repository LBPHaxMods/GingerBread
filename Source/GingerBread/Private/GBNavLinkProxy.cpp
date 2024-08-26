#include "GBNavLinkProxy.h"

AGBNavLinkProxy::AGBNavLinkProxy(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PointLinks.AddDefaulted(1);
    this->LinksPerCM = 1.00f;
    this->DebugLinkGeneration = false;
}

void AGBNavLinkProxy::GenerateLinks() {
}


