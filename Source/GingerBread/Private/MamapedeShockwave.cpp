#include "MamapedeShockwave.h"
#include "Components/SceneComponent.h"
#include "CSPHelperComponent.h"
#include "HitPointsModifierComponent.h"

AMamapedeShockwave::AMamapedeShockwave(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
    this->SceneRoot = (USceneComponent*)RootComponent;
    this->HitPointsModifier = CreateDefaultSubobject<UHitPointsModifierComponent>(TEXT("HitPointsModifier"));
    this->CSPHelperComponent = CreateDefaultSubobject<UCSPHelperComponent>(TEXT("CSPHelperComponent"));
    this->CollisionMeshToSpawn = NULL;
    this->NumberOfSides = 8;
    this->StartDistance = 0.00f;
    this->DistanceMultiplierWidth = 0.00f;
    this->AddedWidth = 0.00f;
    this->CollisionDistanceOffset = 0.00f;
    this->Thickness = 0.00f;
    this->Height = 0.00f;
    this->ArenaBoundsVolume = NULL;
    this->LifeTime = 0.00f;
    this->Speed = 0.00f;
    this->ThicknessGrowSpeed = 0.00f;
    this->VFXToSpawn = NULL;
    this->VFXHeightOffset = 0.00f;
    this->VFXSpawnDelay = 0.00f;
    this->UseGroundDeformation = false;
    this->MaterialParameterCollection = NULL;
}



