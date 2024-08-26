#include "ArtMoveClip.h"

FArtMoveClip::FArtMoveClip() {
    this->FixedDuration = false;
    this->ClipDuration = 0.00f;
    this->ClipMoveSpeed = 0.00f;
    this->UnitStartPos = 0.00f;
    this->UnitEndPos = 0.00f;
    this->ClipLerpMode = EMusicArtMoverLerpMode::Linear;
    this->ProgressCurve = NULL;
    this->ProgressCurveSamples = 0;
    this->CachedProgressCurveID = 0;
    this->Reverse = false;
    this->WaitBefore = 0.00f;
    this->AutoNextClip = 0;
    this->MusicJumpNextClip = 0;
    this->DisableMoveInterpolation = false;
    this->LerpToStart = false;
    this->FixedLerpDuration = false;
    this->LerpDuration = 0.00f;
    this->LerpSpeed = 0.00f;
    this->LerpToStartMode = EMusicArtMoverLerpMode::Linear;
    this->RecipClipDuration = 0.00f;
    this->CachedClipDistance = 0.00f;
}

