#include "ESportsVelociporter.h"
#include "AkComponent.h"
#include "Components/ArrowComponent.h"
#include "Components/BoxComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "Components/SceneComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/StaticMeshComponent.h"
#include "CraftCutterTargetComponent.h"
#include "InteractionComponent.h"
#include "Net/UnrealNetwork.h"
#include "ThrowTargetComponent.h"
#include "TriggerActorComponent.h"

AESportsVelociporter::AESportsVelociporter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->TargetVelociporter = NULL;
    this->MinExitVelocity = 0.00f;
    this->MaxExitVelocity = 0.00f;
    this->SpeedMultiplier = 1.00f;
    this->bDisableSackboyAirSteer = false;
    this->bDisableSackboyAirActions = false;
    this->Colour = EESportsVelociporterColour::Red;
    this->DelayTime = 0.20f;
    this->DisableCollisionBetweenSackboysOnExitTime = 0.00f;
    this->OpenAnim = NULL;
    this->CloseAnim = NULL;
    this->OpenSFX = NULL;
    this->CloseSFX = NULL;
    this->TeleportSFX = NULL;
    this->EnterGamepadSFX = NULL;
    this->ExitGamepadSFX = NULL;
    this->TrailFX = NULL;
    this->SpacetimeCurve = NULL;
    this->VelociportRumble = NULL;
    this->VelociportRumbleHapticsEvent = NULL;
    this->TeleportHapticsEvent = NULL;
    this->bIsOpen_Rep = false;
    this->SkeletorMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletorMesh"));
    this->BodyCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("BodyCollision"));
    this->TeleportCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("TeleportCollision"));
    this->ProximityCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("ProximityCollision"));
    this->TeleportInteract = CreateDefaultSubobject<UInteractionComponent>(TEXT("TeleportInteract"));
    this->ProximityInteract = CreateDefaultSubobject<UInteractionComponent>(TEXT("ProximityInteract"));
    this->EyeOfHarmony = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("EyeOfHarmony"));
    this->ExitArrow = CreateDefaultSubobject<UArrowComponent>(TEXT("ExitArrow"));
    this->SocialDistancingExit1 = CreateDefaultSubobject<UArrowComponent>(TEXT("SocialDistancingExit1"));
    this->SocialDistancingExit2 = CreateDefaultSubobject<UArrowComponent>(TEXT("SocialDistancingExit2"));
    this->SocialDistancingExit3 = CreateDefaultSubobject<UArrowComponent>(TEXT("SocialDistancingExit3"));
    this->SocialDistancingExit4 = CreateDefaultSubobject<UArrowComponent>(TEXT("SocialDistancingExit4"));
    this->Ak_Velociporter = CreateDefaultSubobject<UAkComponent>(TEXT("Ak_Velociporter"));
    this->ExitVFX = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("ExitVFX"));
    this->LightConeVFX = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("LightConeVFX"));
    this->ThrowTargetComponent = CreateDefaultSubobject<UThrowTargetComponent>(TEXT("ThrowTargetComponent"));
    this->CraftCutterTargetComponent = CreateDefaultSubobject<UCraftCutterTargetComponent>(TEXT("CraftCutterTargetComponent"));
    this->TriggerActor = CreateDefaultSubobject<UTriggerActorComponent>(TEXT("TriggerActor"));
    this->IsActive = true;
    this->DeactivateShutterDelay = 0.80f;
    this->DeactivateSleepDelay = 1.30f;
    this->CarriedObjectImpulse = 60.00f;
    this->SkeletorMesh->SetupAttachment(RootComponent);
    this->BodyCollision->SetupAttachment(SkeletorMesh);
    this->TeleportCollision->SetupAttachment(SkeletorMesh);
    this->ProximityCollision->SetupAttachment(SkeletorMesh);
    this->TeleportInteract->SetupAttachment(SkeletorMesh);
    this->ProximityInteract->SetupAttachment(SkeletorMesh);
    this->EyeOfHarmony->SetupAttachment(SkeletorMesh);
    this->ExitArrow->SetupAttachment(SkeletorMesh);
    this->SocialDistancingExit1->SetupAttachment(ExitArrow);
    this->SocialDistancingExit2->SetupAttachment(ExitArrow);
    this->SocialDistancingExit3->SetupAttachment(ExitArrow);
    this->SocialDistancingExit4->SetupAttachment(ExitArrow);
    this->Ak_Velociporter->SetupAttachment(SkeletorMesh);
    this->ExitVFX->SetupAttachment(SkeletorMesh);
    this->LightConeVFX->SetupAttachment(SkeletorMesh);
    this->ThrowTargetComponent->SetupAttachment(SkeletorMesh);
    this->CraftCutterTargetComponent->SetupAttachment(SkeletorMesh);
}

void AESportsVelociporter::TimelineCallback(float val) {
}

void AESportsVelociporter::OnTeleportTriggerOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void AESportsVelociporter::OnTeleportTriggerInteractBegin(UInteractionComponent* OverlappedComp, AActor* OtherActor, UInteractionComponent* OtherComp) {
}

void AESportsVelociporter::OnShutterTriggerOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void AESportsVelociporter::OnShutterTriggerOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void AESportsVelociporter::OnShutterTriggerInteractEnd(UInteractionComponent* OverlappedComp, AActor* OtherActor, UInteractionComponent* OtherComp) {
}

void AESportsVelociporter::OnShutterTriggerInteractBegin(UInteractionComponent* OverlappedComp, AActor* OtherActor, UInteractionComponent* OtherComp) {
}

void AESportsVelociporter::OnRep_ServerSetShutter() {
}

void AESportsVelociporter::OnRep_ActiveChanged() {
}

void AESportsVelociporter::OnCSPActionObjectFloat(uint32 Type, UObject* Obj, float F) {
}

void AESportsVelociporter::Multicast_AlertActorNowInRealm_Implementation(AActor* PortActor, bool useSocialDistancing) {
}

void AESportsVelociporter::Multicast_ActorEntersRealm_Implementation() {
}

void AESportsVelociporter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AESportsVelociporter, bIsOpen_Rep);
    DOREPLIFETIME(AESportsVelociporter, IsActive);
}


