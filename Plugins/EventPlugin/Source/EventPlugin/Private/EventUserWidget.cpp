#include "EventUserWidget.h"

void UEventUserWidget::RequestRemove_Implementation() {
}

void UEventUserWidget::OnStartNewAction_Implementation() {
}




UEventUserWidget::UEventUserWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->EventPlayer = NULL;
}

