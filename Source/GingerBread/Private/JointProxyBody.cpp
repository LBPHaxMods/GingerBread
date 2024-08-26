#include "JointProxyBody.h"

AJointProxyBody::AJointProxyBody(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Primitive = NULL;
    this->Creator = NULL;
}

AActor* AJointProxyBody::GetCreator() const {
    return NULL;
}


