#include "SettingsLoadSaveData.h"

FSettingsLoadSaveData::FSettingsLoadSaveData() {
    this->SeenFirstTimeScreen = false;
    this->VibrationScale = 0.00f;
    this->TriggerModeDisabled = false;
    this->UseControllerAudio = false;
    this->GrabCarryToggleEnabled = false;
    this->FlutterJumpToggleEnabled = false;
    this->RollHoldToggleEnabled = false;
    this->StickSwap = false;
    this->InvertXAxis = false;
    this->InvertYAxis = false;
    this->UseRightStickToTilt = false;
    this->InnerDeadzone = 0.00f;
    this->OuterDeadzone = 0.00f;
}

