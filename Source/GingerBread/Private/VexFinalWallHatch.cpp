#include "VexFinalWallHatch.h"
#include "Components/BoxComponent.h"
#include "PhysicsEngine/PhysicsConstraintComponent.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Net/UnrealNetwork.h"

AVexFinalWallHatch::AVexFinalWallHatch(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
    this->SceneRoot = (USceneComponent*)RootComponent;
    this->HatchMesh = NULL;
    this->PhysicalHatch = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PhysicalHatch"));
    this->FakeHatch = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("FakeHatch"));
    this->PhysicsConstraint = CreateDefaultSubobject<UPhysicsConstraintComponent>(TEXT("PhysicsConstraint"));
    this->BoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComponent"));
    this->DynamicMaterialIndex = 6;
    this->EmissiveParameterName = TEXT("Detail Emissive Intensity");
    this->EmissiveValue = 0.20f;
    this->LightIntensityParameterName = TEXT("Light Intensity");
    this->LightIntensityValue = 20.00f;
    this->PhysicalHatch->SetupAttachment(RootComponent);
    this->FakeHatch->SetupAttachment(RootComponent);
    this->PhysicsConstraint->SetupAttachment(RootComponent);
    this->BoxComponent->SetupAttachment(RootComponent);
}

void AVexFinalWallHatch::ToggleHatchLight_Implementation(bool LightOn) {
}

void AVexFinalWallHatch::SetUseFakeHatch_Implementation(bool UseFakeHatch) {
}





void AVexFinalWallHatch::OnComponentEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void AVexFinalWallHatch::OnComponentBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void AVexFinalWallHatch::DestroyPhysicsHatch_Implementation() {
}

void AVexFinalWallHatch::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AVexFinalWallHatch, FakeServerHatchState);
}


