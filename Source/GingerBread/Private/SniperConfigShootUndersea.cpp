#include "SniperConfigShootUndersea.h"

USniperConfigShootUndersea::USniperConfigShootUndersea() {
    this->ReloadOrder.AddDefaulted(4);
    this->HomingEnabled = true;
    this->MaxStuckAngle = 40.00f;
    this->StuckAngleRandomDeviation = 7.50f;
    this->StuckAngleRotationSpeed = 100.00f;
}


