#include "VexFinalItemAttack.h"
#include "Components/DecalComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "Components/SceneComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/SplineComponent.h"
#include "CSPHelperComponent.h"

AVexFinalItemAttack::AVexFinalItemAttack(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
    this->SceneRoot = (USceneComponent*)RootComponent;
    this->HandRoot = CreateDefaultSubobject<USceneComponent>(TEXT("HandRoot"));
    this->MeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("MeshComponent"));
    this->ShadowComponent = CreateDefaultSubobject<UDecalComponent>(TEXT("ShadowComponent"));
    this->ShadowComponentHQ = CreateDefaultSubobject<UDecalComponent>(TEXT("ShadowComponentHQ"));
    this->ArmSplineComponent = CreateDefaultSubobject<USplineComponent>(TEXT("ArmSplineComponent"));
    this->ArmSplineVFXComponent = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("ArmSplineVFXComponent"));
    this->CSPHelperComponent = CreateDefaultSubobject<UCSPHelperComponent>(TEXT("CSPHelperComponent"));
    this->ItemToDrop = EVexFinalItemAttackItem::Bomb;
    this->IsRightHand = true;
    this->OneShot = false;
    this->Vex = NULL;
    this->PreSpawnTime = 0.30f;
    this->ArmSplineCreationDuration = 0.50f;
    this->EmissiveAlphaCurve = NULL;
    this->ReduceEmissiveDelay = 1.00f;
    this->ReduceEmissiveDuration = 0.33f;
    this->FinishDroppingTime = 0.30f;
    this->EmissiveTexture = NULL;
    this->MaxEmissiveIntensity = 5.00f;
    this->ShadowGrowCurve = NULL;
    this->ShadowShrinkCurve = NULL;
    this->ShadowGrowDuration = 0.50f;
    this->ShadowShrinkDuration = 0.25f;
    this->UseHQShadow = false;
    this->HQShadowRTIndex = 0;
    this->HandRoot->SetupAttachment(RootComponent);
    this->MeshComponent->SetupAttachment(HandRoot);
    this->ShadowComponent->SetupAttachment(HandRoot);
    this->ShadowComponentHQ->SetupAttachment(HandRoot);
    this->ArmSplineComponent->SetupAttachment(RootComponent);
    this->ArmSplineVFXComponent->SetupAttachment(RootComponent);
}




void AVexFinalItemAttack::DropItemComplete() {
}

void AVexFinalItemAttack::DropItem() {
}

void AVexFinalItemAttack::Activate() {
}


