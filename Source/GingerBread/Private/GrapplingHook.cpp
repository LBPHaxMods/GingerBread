#include "GrapplingHook.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"
#include "RopeMeshComponent.h"

AGrapplingHook::AGrapplingHook(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->Root = (USceneComponent*)RootComponent;
    this->GrappleGunMesh = NULL;
    this->GrappleHookMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("GrappleHookMesh"));
    this->GrappleRopeMesh = CreateDefaultSubobject<URopeMeshComponent>(TEXT("GrappleRopeMesh"));
    this->GrappleRopeMasterMaterial = NULL;
    this->GrappleMeshMasterMaterial = NULL;
    this->GrappleRopeDynamicMaterial = NULL;
    this->GrappleMeshDynamicMaterial = NULL;
    this->NumRopeSides = 16;
    this->RopeRadius = 0.35f;
    this->RopeMaterialTile = 1.00f;
    this->GrappleHookMesh->SetupAttachment(RootComponent);
    this->GrappleRopeMesh->SetupAttachment(RootComponent);
}

void AGrapplingHook::UpdateColours() {
}


