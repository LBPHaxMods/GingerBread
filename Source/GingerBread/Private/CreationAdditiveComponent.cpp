#include "CreationAdditiveComponent.h"

UCreationAdditiveComponent::UCreationAdditiveComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}


void UCreationAdditiveComponent::OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}




void UCreationAdditiveComponent::GetRecipes(TArray<UCreationRecipe*>& AllRecipes) {
}

void UCreationAdditiveComponent::GetConnectedActors(TArray<AActor*>& ConnectedActors) const {
}

TEnumAsByte<EChassisType> UCreationAdditiveComponent::GetChassisType() {
    return Unassigned;
}

UCreationBaseComponent* UCreationAdditiveComponent::GetBaseCreationComponent() {
    return NULL;
}

AActor* UCreationAdditiveComponent::GetBaseCreationActor() {
    return NULL;
}

void UCreationAdditiveComponent::GetAdditiveActorsByType(const TArray<FName>& AdditiveTypes, TArray<AActor*>& AdditiveActors) {
}

void UCreationAdditiveComponent::FindFirstAdditiveActor(const FName AdditiveType, TArray<AActor*>& AdditiveActors) {
}

void UCreationAdditiveComponent::ExitCraftingPlatform(AActor* CraftingPlatform) {
}

void UCreationAdditiveComponent::EnterCraftingPlatform(AActor* CraftingPlatform) {
}

void UCreationAdditiveComponent::EnableCreation(bool bEnable, const TArray<AGingerbreadPlayerController*>& PlayerControllers) {
}


