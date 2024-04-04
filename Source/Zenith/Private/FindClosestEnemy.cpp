#include "FindClosestEnemy.h"

UFindClosestEnemy::UFindClosestEnemy() {
    this->MinDistance = 0.00f;
    this->MaxDistance = 10000.00f;
    this->bCheckFront = false;
    this->bCheckLineOfSight = false;
    this->VisibilityCollisionChannel = ECC_Visibility;
}


