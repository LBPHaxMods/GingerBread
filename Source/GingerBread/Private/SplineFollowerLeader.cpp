#include "SplineFollowerLeader.h"
#include "Components/SceneComponent.h"
#include "Net/UnrealNetwork.h"
#include "SplineFollowerComponent.h"

ASplineFollowerLeader::ASplineFollowerLeader(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->SplineFollowerComponent = CreateDefaultSubobject<USplineFollowerComponent>(TEXT("SplineFollowerComponent"));
    this->Root = (USceneComponent*)RootComponent;
}

void ASplineFollowerLeader::UnpauseSubjectActor(AActor* Subject) {
}

void ASplineFollowerLeader::UnpauseSubject(USceneComponent* Subject) {
}

void ASplineFollowerLeader::Start() {
}

void ASplineFollowerLeader::SetUp(USplineComponent* SplineComponent, bool Replicates, bool UseCSP, float CustomCSPDelay) {
}

void ASplineFollowerLeader::ResetSubjectActor(AActor* Subject, float SplinePosition) {
}

void ASplineFollowerLeader::ResetSubject(USceneComponent* Subject, float SplinePosition) {
}

void ASplineFollowerLeader::RemoveSceneComponent(USceneComponent* Subject) {
}

void ASplineFollowerLeader::RemoveActor(AActor* Subject) {
}

void ASplineFollowerLeader::PauseSubjectActor(AActor* Subject) {
}

void ASplineFollowerLeader::PauseSubject(USceneComponent* Subject) {
}

void ASplineFollowerLeader::PAUSE() {
}

bool ASplineFollowerLeader::HasSubjects() {
    return false;
}

float ASplineFollowerLeader::GetSubjectSplinePosition(USceneComponent* Subject) {
    return 0.0f;
}

float ASplineFollowerLeader::GetSubjectActorSplinePosition(AActor* Subject) {
    return 0.0f;
}

float ASplineFollowerLeader::GetCSPDelay() {
    return 0.0f;
}

void ASplineFollowerLeader::AddSceneComponents(TArray<USceneComponent*> Subjects, float Spacing) {
}

void ASplineFollowerLeader::AddSceneComponent(USceneComponent* Subject, float Position) {
}

void ASplineFollowerLeader::AddActors(TArray<AActor*> Subjects, float Spacing) {
}

void ASplineFollowerLeader::AddActor(AActor* Subject, float Position) {
}

void ASplineFollowerLeader::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASplineFollowerLeader, SplineLeaderSubjects);
}


