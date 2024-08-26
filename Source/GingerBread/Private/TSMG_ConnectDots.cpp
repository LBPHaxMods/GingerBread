#include "TSMG_ConnectDots.h"

UTSMG_ConnectDots::UTSMG_ConnectDots(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GridSize = 250.00f;
    this->NodeSpacing = 1.00f;
    this->DisplayDebug = false;
}

void UTSMG_ConnectDots::SetTargetPos(const FVector StartPos, const FVector EndPos, const int32 PlayerIndex) {
}

void UTSMG_ConnectDots::RESET() {
}

bool UTSMG_ConnectDots::PaintPositon(const FVector pos, const int32 PlayerIndex) {
    return false;
}

void UTSMG_ConnectDots::InitGrid(const FVector pos) {
}

void UTSMG_ConnectDots::ClearGrid() {
}

void UTSMG_ConnectDots::CheckGrid(int32 PlayerId) {
}


