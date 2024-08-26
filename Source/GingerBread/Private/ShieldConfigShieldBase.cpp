#include "ShieldConfigShieldBase.h"

UShieldConfigShieldBase::UShieldConfigShieldBase() {
    this->SocketToAttachTo = TEXT("Shield_Socket");
    this->ShieldLifespanWhenDropped = 0.00f;
    this->ShieldBashAnticipation = 0.75f;
    this->ShieldBashAnticipationRetractionDist = 1.50f;
    this->ShieldBashDuration = 1.00f;
    this->ShieldBashExtentionDist = 6.00f;
    this->ShieldBashMaxAttackAngle = 30.00f;
}


