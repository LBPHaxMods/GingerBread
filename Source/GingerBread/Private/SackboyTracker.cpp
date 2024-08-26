#include "SackboyTracker.h"

USackboyTracker::USackboyTracker(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->IsEnabled = true;
}

void USackboyTracker::SetEnabled(bool State) {
}

void USackboyTracker::OnObjectTickManagerAvailable(AActor* ManagerActor) {
}

bool USackboyTracker::GetEnabled() const {
    return false;
}


