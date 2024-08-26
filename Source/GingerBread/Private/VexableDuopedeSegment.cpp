#include "VexableDuopedeSegment.h"
#include "Particles/ParticleSystemComponent.h"
#include "Net/UnrealNetwork.h"

AVexableDuopedeSegment::AVexableDuopedeSegment(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->VexedParticleSystemComponent = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("VexedParticleSystemComponent"));
    this->VexedSkeletalMesh = NULL;
    this->NonVexedSkeletalMesh = NULL;
    this->IsVexed = false;
    this->VexedParticleSystemComponent->SetupAttachment(DuopedeMesh);
}

void AVexableDuopedeSegment::SetIsVexed(bool InIsVexed) {
}

void AVexableDuopedeSegment::OnRep_IsVexed() {
}

bool AVexableDuopedeSegment::GetIsVexed() const {
    return false;
}

void AVexableDuopedeSegment::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AVexableDuopedeSegment, IsVexed);
}


