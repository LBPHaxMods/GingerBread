#include "BaseVehicle.h"

ABaseVehicle::ABaseVehicle(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->UseFollowCamera = true;
    this->VehicleCameraArea = NULL;
}

void ABaseVehicle::SetVehicleCamera(bool State) {
}

void ABaseVehicle::SetCreationObject(UCreationBaseComponent* Object) {
}

UCreationBaseComponent* ABaseVehicle::GetCreationObject() {
    return NULL;
}


