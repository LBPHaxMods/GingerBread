#include "FroogleConfigHopBase.h"

UFroogleConfigHopBase::UFroogleConfigHopBase() {
    this->HopToAimArc = 0.33f;
    this->HopToAimDistance = 8.00f;
    this->HopAttackDecisionRange = 36.00f;
    this->HopAttackOffsetFromDestination = 4.00f;
    this->HopAttackPredictAheadTime = 0.75f;
    this->HopAttackMaxAngleDeviation = 25.00f;
    this->HopAttackArc = 0.55f;
    this->HopAttackMaxJumpDistance = 44.00f;
    this->HopAttackMinJumpDistance = 22.00f;
    this->HopAttackMaxHeight = 28.00f;
    this->BounceOffAIAngle = 60.00f;
    this->BounceOffAIImpulseStrength = 60.00f;
    this->NormalAttackAnticipationJumpDistance = -26.00f;
    this->NormalAttackAnticipationMinimumAcceptablePercent = 0.75f;
    this->NormalAttackAnticipationPredictAheadSeconds = 0.20f;
    this->NormalAttackAnticipationRotationSpeed = 360.00f;
    this->StaticNormalAttackAnticipationRotationSpeed = 360.00f;
}


