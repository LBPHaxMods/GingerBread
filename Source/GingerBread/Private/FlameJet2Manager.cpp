#include "FlameJet2Manager.h"
#include "Components/SceneComponent.h"

AFlameJet2Manager::AFlameJet2Manager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));

    this->GauzeMaterialInterface = NULL;
    this->FlameMaterialInterface = NULL;
}


