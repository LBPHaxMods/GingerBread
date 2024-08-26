#include "VexConfigGenericBase.h"

UVexConfigGenericBase::UVexConfigGenericBase() {
    this->BossMaxHealth = 295;
    this->BossHealthPhaseChanges.AddDefaulted(3);
    this->BombDamage = 30;
    this->MPDamageMultiplier.AddDefaulted(4);
    this->TakeDamageVFX = NULL;
}


