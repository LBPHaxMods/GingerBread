#include "BaseButtonPrompt.h"

UBaseButtonPrompt::UBaseButtonPrompt() : UUserWidget(FObjectInitializer::Get()) {
}

bool UBaseButtonPrompt::WasRecentlyRendered() const {
    return false;
}

void UBaseButtonPrompt::SetMouseInput(bool Enabled) {
}





bool UBaseButtonPrompt::GetMouseInput() {
    return false;
}


