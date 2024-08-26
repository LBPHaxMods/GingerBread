#include "PhasePlatform.h"

APhasePlatform::APhasePlatform(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;

    this->Inverse = false;
    this->RegularMaterial = NULL;
    this->InverseMaterial = NULL;
    this->BeginInverseAudioEvent = NULL;
    this->BeginNormalAudioEvent = NULL;
    this->EndInverseAudioEvent = NULL;
    this->EndNormalAudioEvent = NULL;
    this->IntensityRTPCMultiplier = 100.00f;
    this->PlatformCollider = NULL;
    this->InteractionCollider = NULL;
    this->DebugLogActive = false;
    this->EnableDebugLogInstance = false;
}




void APhasePlatform::OnEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void APhasePlatform::OnEndInteractOverlap(UInteractionComponent* OverlappedComp, AActor* OtherActor, UInteractionComponent* OtherComp) {
}

void APhasePlatform::OnBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void APhasePlatform::OnBeginInteractOverlap(UInteractionComponent* OverlappedComp, AActor* OtherActor, UInteractionComponent* OtherComp) {
}


