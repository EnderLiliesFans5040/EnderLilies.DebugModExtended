#pragma once
#include "CoreMinimal.h"
#include "EventObject.h"
#include "EEventActionResult.h"
#include "UObject/NoExportTypes.h"
#include "EventAction.generated.h"

class UEventPlayer;
class AActor;
class APlayerController;
class UEventBlackBoard;

UCLASS(Abstract, Blueprintable, CollapseCategories, EditInlineNew)
class EVENTPLUGIN_API UEventAction : public UEventObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bFireAndForget;
    
public:
    UEventAction();
    UFUNCTION(BlueprintCallable)
    void TickAction(float DeltaTime, APlayerController* ConsideringPlayer, AActor* Subject, AActor* Target, UEventBlackBoard* EventBlackBoard);
    
    UFUNCTION(BlueprintCallable)
    void StartAction(APlayerController* ConsideringPlayer, AActor* Subject, AActor* Target, UEventBlackBoard* EventBlackBoard);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnTickAction(float DeltaTime, APlayerController* ConsideringPlayer, AActor* Subject, AActor* Target, UEventBlackBoard* EventBlackBoard);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnStartAction(APlayerController* ConsideringPlayer, AActor* Subject, AActor* Target, UEventBlackBoard* EventBlackBoard);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnEndAction(APlayerController* ConsideringPlayer, AActor* Subject, AActor* Target, UEventBlackBoard* EventBlackBoard);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnAbortAction(APlayerController* ConsideringPlayer, AActor* Subject, AActor* Target, UEventBlackBoard* EventBlackBoard);
    
public:
    UFUNCTION(BlueprintPure)
    EEventActionResult GetResult() const;
    
protected:
    UFUNCTION(BlueprintPure)
    FTransform GetOriginTransform() const;
    
    UFUNCTION(BlueprintPure)
    UEventPlayer* GetEventPlayer() const;
    
    UFUNCTION(BlueprintCallable)
    void FinishAction(EEventActionResult Result);
    
public:
    UFUNCTION(BlueprintCallable)
    void EndAction(APlayerController* ConsideringPlayer, AActor* Subject, AActor* Target, UEventBlackBoard* EventBlackBoard);
    
    UFUNCTION(BlueprintCallable)
    void AbortAction(APlayerController* ConsideringPlayer, AActor* Subject, AActor* Target, UEventBlackBoard* EventBlackBoard);
    
};

