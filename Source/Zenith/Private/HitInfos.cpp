#include "HitInfos.h"

FHitInfos::FHitInfos() {
    this->ID = 0;
    this->OtherComp = NULL;
    this->bFromSweep = false;
    this->TimeWhenHit = 0.00f;
    this->bGuard = false;
    this->bJustGuard = false;
    this->bJustDodged = false;
    this->bParried = false;
}

