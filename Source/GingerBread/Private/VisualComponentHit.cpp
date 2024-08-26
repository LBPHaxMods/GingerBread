#include "VisualComponentHit.h"

FVisualComponentHit::FVisualComponentHit() {
    this->bHit = false;
    this->Time = 0.00f;
    this->Distance = 0.00f;
    this->component = NULL;
    this->PhysicalMaterial = NULL;
}

