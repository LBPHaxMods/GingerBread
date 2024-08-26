#include "WaterBase.h"

AWaterBase::AWaterBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

UStaticMeshComponent* AWaterBase::GetWaterPlaneCPP_Implementation() const {
    return NULL;
}


