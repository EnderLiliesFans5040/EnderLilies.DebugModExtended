#include "ComparisonCondition.h"

UComparisonCondition::UComparisonCondition() {
    this->ConditionType = EConditionType::Superior;
}

float UComparisonCondition::GetValueToCompare_Implementation(const AAIController* AIController, const APawn* Pawn) const {
    return 0.0f;
}

float UComparisonCondition::GetComparingValue_Implementation() const {
    return 0.0f;
}


