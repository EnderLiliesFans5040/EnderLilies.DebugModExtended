#include "EventPlayer.h"
#include "Templates/SubclassOf.h"

class AActor;
class APlayerController;
class UExecuteEventActionAsync;
class UEventUserWidget;
class AEventCamera;
class UEventAsset;
class UEventBlackBoard;
class AController;
class UEventPlayer;

void UEventPlayer::SubmitReply(const FEventNode& Reply) {
}

void UEventPlayer::SpawnActorBinding(FName BindingName, const FActorBindingInfos& ActorBindingInfos) {
}

void UEventPlayer::SetEventSkippable() {
}

void UEventPlayer::RemoveActorBinding(FName BindingName) {
}

void UEventPlayer::Play(APlayerController* PlayerInstigator, AActor* EventInstigator, const TMap<FName, AActor*>& EventActorBindings) {
}

void UEventPlayer::OnReceivedFinishActionFireAndForget(UExecuteEventActionAsync* EventActionAsync) {
}

void UEventPlayer::OnReceivedFinishAction(UExecuteEventActionAsync* EventActionAsync) {
}

bool UEventPlayer::IsWaitingForPlayer() const {
    return false;
}

bool UEventPlayer::IsPlaying() const {
    return false;
}

bool UEventPlayer::IsEventSkippable() const {
    return false;
}

bool UEventPlayer::IsEventPausable() const {
    return false;
}

TArray<FEventNode> UEventPlayer::GetPlayerChoices() const {
    return TArray<FEventNode>();
}

AActor* UEventPlayer::GetPlayerActor() const {
    return NULL;
}

AActor* UEventPlayer::GetOwner() const {
    return NULL;
}

FTransform UEventPlayer::GetOriginTransform() const {
    return FTransform{};
}

APlayerController* UEventPlayer::GetInteractingPlayer() const {
    return NULL;
}

AActor* UEventPlayer::GetInstigator() const {
    return NULL;
}

UEventUserWidget* UEventPlayer::GetEventWidget() const {
    return NULL;
}

AEventCamera* UEventPlayer::GetEventCamera() const {
    return NULL;
}

UEventAsset* UEventPlayer::GetEventAsset() const {
    return NULL;
}

FEventNode UEventPlayer::GetCurrentNode() const {
    return FEventNode{};
}

UEventBlackBoard* UEventPlayer::GetBlackBoard() const {
    return NULL;
}

FName UEventPlayer::GetBindingForActor(AActor* Actor) const {
    return NAME_None;
}

AActor* UEventPlayer::GetActorForBinding(FName Binding) const {
    return NULL;
}

AActor* UEventPlayer::GetActorForActorType(EEventActorType ActorType, const FName& Binding, bool bLogIfNotFound) const {
    return NULL;
}

TMap<FName, AActor*> UEventPlayer::GetActorBindings() const {
    return TMap<FName, AActor*>();
}

UEventPlayer* UEventPlayer::CreateEventPlayer(AActor* NewOwner, UEventAsset* NewEventAsset, TSubclassOf<AController> ControllerClassToUse, TSubclassOf<UEventUserWidget> NewEventWidgetClass) {
    return NULL;
}

void UEventPlayer::Continue() {
}

void UEventPlayer::AddOrReplaceActorBinding(FName BindingName, AActor* Actor) {
}

void UEventPlayer::AddActorBinding(FName BindingName, AActor* Actor) {
}

void UEventPlayer::Abort() {
}

UEventPlayer::UEventPlayer() {
    this->Owner = NULL;
    this->EventAsset = NULL;
    this->EventBlackBoard = NULL;
    this->EventControllerClass = NULL;
    this->EventWidgetClass = NULL;
    this->EventWidgetInstance = NULL;
    this->EventCamera = NULL;
    this->CurrentAction = NULL;
}

