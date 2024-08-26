#include "NaomiSkullShockwave.h"
#include "AkComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"
#include "CSPHelperComponent.h"
#include "HitPointsModifierComponent.h"

ANaomiSkullShockwave::ANaomiSkullShockwave(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
    this->SceneRoot = (USceneComponent*)RootComponent;
    this->SkullWaveVFX = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("SkullWaveVFX"));
    this->ShockwaveAK = CreateDefaultSubobject<UAkComponent>(TEXT("ShockwaveAK"));
    this->CollisionCylinder = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CollisionCylinder"));
    this->HitPointsModifier = CreateDefaultSubobject<UHitPointsModifierComponent>(TEXT("HitPointsModifier"));
    this->CSPHelperComponent = CreateDefaultSubobject<UCSPHelperComponent>(TEXT("CSPHelperComponent"));
    this->StartDistance = 0.00f;
    this->Thickness = 5.00f;
    this->CollisionDistanceOffset = 5.00f;
    this->Height = 0.50f;
    this->LifeTime = 4.00f;
    this->Speed = 50.00f;
    this->SkullMaterial = NULL;
    this->RingMaterial = NULL;
    this->SortPriority = 0;
    this->VFXTotalRotationToAdd = 90.00f;
    this->SpawnSFX = NULL;
    this->SpawnHaptics = NULL;
    this->SkullWaveVFX->SetupAttachment(RootComponent);
    this->ShockwaveAK->SetupAttachment(RootComponent);
    this->CollisionCylinder->SetupAttachment(RootComponent);
}



