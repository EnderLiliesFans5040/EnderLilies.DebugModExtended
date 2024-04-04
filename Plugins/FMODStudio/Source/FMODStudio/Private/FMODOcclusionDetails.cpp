#include "FMODOcclusionDetails.h"

FFMODOcclusionDetails::FFMODOcclusionDetails() {
    this->bEnableOcclusion = false;
    this->OcclusionTraceChannel = ECC_WorldStatic;
    this->bUseComplexCollisionForOcclusion = false;
}

