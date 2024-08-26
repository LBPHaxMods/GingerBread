#include "VexFinalAttackLoopComponent.h"

UVexFinalAttackLoopComponent::UVexFinalAttackLoopComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->NumberOfCyclesPerStage.AddDefaulted(4);
}

void UVexFinalAttackLoopComponent::ResetCycle() {
}

void UVexFinalAttackLoopComponent::OnStageChange_Implementation(int32 InStage) {
}

UVexFinalAttackAction* UVexFinalAttackLoopComponent::MakeAttackAction_VanishMove(float Delay) {
    return NULL;
}

UVexFinalAttackAction* UVexFinalAttackLoopComponent::MakeAttackAction_Trickster(EVexFinalTricksterAttackType TricksterAttackType, float Delay, bool WaitForCompletion) {
    return NULL;
}

UVexFinalAttackAction* UVexFinalAttackLoopComponent::MakeAttackAction_Transform_Turrets() {
    return NULL;
}

UVexFinalAttackAction* UVexFinalAttackLoopComponent::MakeAttackAction_Transform_Duopedes() {
    return NULL;
}

UVexFinalAttackAction* UVexFinalAttackLoopComponent::MakeAttackAction_Transform_Darts() {
    return NULL;
}

UVexFinalAttackAction* UVexFinalAttackLoopComponent::MakeAttackAction_SplatAttack(bool UseVexHands, bool WaitForCompletion) {
    return NULL;
}

UVexFinalAttackAction* UVexFinalAttackLoopComponent::MakeAttackAction_Reveal(float Delay) {
    return NULL;
}

UVexFinalAttackAction* UVexFinalAttackLoopComponent::MakeAttackAction_ItemAttack() {
    return NULL;
}

UVexFinalAttackAction* UVexFinalAttackLoopComponent::MakeAttackAction_FistAttack(bool WaitForCompletion) {
    return NULL;
}

UVexFinalAttackAction* UVexFinalAttackLoopComponent::MakeAttackAction_BreakWall() {
    return NULL;
}

UVexFinalAttackAction* UVexFinalAttackLoopComponent::MakeAttackAction_BreakFloor() {
    return NULL;
}

UVexFinalAttackAction* UVexFinalAttackLoopComponent::MakeAttackAction_BombSpamAttack(bool WaitForCompletion) {
    return NULL;
}

bool UVexFinalAttackLoopComponent::IsSackboyInProximity() const {
    return false;
}





bool UVexFinalAttackLoopComponent::CanStealLives() const {
    return false;
}

bool UVexFinalAttackLoopComponent::CanManipulateSackboys() const {
    return false;
}


