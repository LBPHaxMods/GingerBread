#include "BlastersMode.h"
#include "EControlMode.h"

UBlastersMode::UBlastersMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ModeType = EControlMode::Blasters;
    this->BlastersProjectileClass = NULL;
    this->BlastersMeshMasterMaterial = NULL;
    this->BlastersMeshDynamicMaterial = NULL;
}

void UBlastersMode::UpdateMaterials() {
}


