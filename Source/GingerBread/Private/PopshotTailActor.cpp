#include "PopshotTailActor.h"
#include "Components/SceneComponent.h"
#include "Components/SphereComponent.h"
#include "Components/SplineMeshComponent.h"
#include "Components/StaticMeshComponent.h"
#include "GameplayTagComponent.h"
#include "GrappleTargetComponent.h"

APopshotTailActor::APopshotTailActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->TailMiddle = NULL;
    this->TailMiddleSplineMesh = CreateDefaultSubobject<USplineMeshComponent>(TEXT("TailMiddleSplineMesh"));
    this->TailMiddleCollider = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("TailMiddleCollider"));
    this->TailMiddleGameplayTag = CreateDefaultSubobject<UGameplayTagComponent>(TEXT("TailMiddleGameplayTag"));
    this->TailEndCollider = CreateDefaultSubobject<USphereComponent>(TEXT("TailEndCollider"));
    this->TailEndMeshRoot = CreateDefaultSubobject<USceneComponent>(TEXT("TailEndMeshRoot"));
    this->TailEndMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("TailEndMesh"));
    this->TailEndMiddleAttachPoint = CreateDefaultSubobject<USceneComponent>(TEXT("TailEndMiddleAttachPoint"));
    this->TailEndRestLocation = CreateDefaultSubobject<USceneComponent>(TEXT("TailEndRestLocation"));
    this->TailEndGameplayTag = CreateDefaultSubobject<UGameplayTagComponent>(TEXT("TailEndGameplayTag"));
    this->GrappleTarget = CreateDefaultSubobject<UGrappleTargetComponent>(TEXT("GrappleTarget"));
    this->DebugConstraintForces = false;
    this->TailEndMesh->SetupAttachment(TailEndMeshRoot);
    this->TailEndMiddleAttachPoint->SetupAttachment(TailEndMesh);
    this->TailEndRestLocation->SetupAttachment(RootComponent);
    this->TailEndGameplayTag->SetupAttachment(TailEndCollider);
    this->GrappleTarget->SetupAttachment(TailEndCollider);
    this->TailMiddleSplineMesh->SetupAttachment(RootComponent);
    this->TailMiddleCollider->SetupAttachment(RootComponent);
    this->TailMiddleGameplayTag->SetupAttachment(TailMiddleCollider);
    this->TailEndCollider->SetupAttachment(RootComponent);
    this->TailEndMeshRoot->SetupAttachment(TailEndCollider);
}

void APopshotTailActor::SetGrabbable(bool is_grabbable) {
}

void APopshotTailActor::SetEnabled(bool is_enabled) {
}

void APopshotTailActor::NotifyTailOverpulled_Implementation() {
}

bool APopshotTailActor::IsGrappled() const {
    return false;
}

bool APopshotTailActor::IsGrabbedOrGrappled() const {
    return false;
}

bool APopshotTailActor::IsGrabbed() const {
    return false;
}

void APopshotTailActor::InitaliseTail(const FPopshotTailSettings& tail_settings, UPrimitiveComponent* tail_constraint_base, USceneComponent* tail_visual_base, USkeletalMeshComponent* skeletal_mesh, FName tail_end_attach_socket) {
}

float APopshotTailActor::GetPulledPercentage() const {
    return 0.0f;
}

void APopshotTailActor::ChangeToSocketDriven() {
}


