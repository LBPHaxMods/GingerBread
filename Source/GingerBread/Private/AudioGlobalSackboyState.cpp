#include "AudioGlobalSackboyState.h"

UAudioGlobalSackboyState::UAudioGlobalSackboyState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_fIdleCooldownTime = 2.00f;
    this->m_fExtendedHOverStateTime = 3.00f;
    this->m_IsIdleEventName = TEXT("SackboyIsIdle");
    this->m_IsNotIdleEventName = TEXT("SackboyIsMoving");
    this->m_IsHoveringEventName = TEXT("sackboyishovering");
    this->m_IsNotHoveringEventName = TEXT("sackboyisnothovering");
    this->m_ExtendedHoveringStateName = TEXT("sackboyhoveringextended");
}

void UAudioGlobalSackboyState::SackBoyIsNotIdle() {
}

void UAudioGlobalSackboyState::SackboyIsNotHovering() {
}

void UAudioGlobalSackboyState::SackboyIsIdle() {
}

void UAudioGlobalSackboyState::SackboyIsHovering() {
}

void UAudioGlobalSackboyState::OnSackboyIdleCooldownEnded() {
}

void UAudioGlobalSackboyState::OnExtendedHoverTimeReached() {
}

void UAudioGlobalSackboyState::EnableSackboyIdleStateOverride() {
}

void UAudioGlobalSackboyState::DisableSackboyIdleStateOverride() {
}


