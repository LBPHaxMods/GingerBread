#include "LoggerPointDataAsset.h"

ULoggerPointDataAsset::ULoggerPointDataAsset() {
    this->PreDetailedCaptureDelay = 2.00f;
    this->DetailedLogTime = 5.00f;
    this->NextTeleportDelay = 1.00f;
    this->ScreenshotDelay = 2.50f;
    this->OutputLogsDelay = 2.00f;
    this->PreVBlankCaptureDelay = 2.00f;
    this->VBlankLogTime = 5.00f;
}


