#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EEventActionResult.h"
#include "EventObject.h"
#include "EventAction.generated.h"

class AActor;
class APlayerController;
class UEventBlackBoard;
class UEventPlayer;

UCLASS(Abstract, Blueprintable, CollapseCategories, EditInlineNew)
class EVENTPLUGIN_API UEventAction : public UEventObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFireAndForget;
    
public:
    UEventAction();

    UFUNCTION(BlueprintCallable)
    void TickAction(float DeltaTime, APlayerController* ConsideringPlayer, AActor* Subject, AActor* Target, UEventBlackBoard* EventBlackBoard);
    
    UFUNCTION(BlueprintCallable)
    void StartAction(APlayerController* ConsideringPlayer, AActor* Subject, AActor* Target, UEventBlackBoard* EventBlackBoard);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTickAction(float DeltaTime, APlayerController* ConsideringPlayer, AActor* Subject, AActor* Target, UEventBlackBoard* EventBlackBoard);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStartAction(APlayerController* ConsideringPlayer, AActor* Subject, AActor* Target, UEventBlackBoard* EventBlackBoard);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEndAction(APlayerController* ConsideringPlayer, AActor* Subject, AActor* Target, UEventBlackBoard* EventBlackBoard);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAbortAction(APlayerController* ConsideringPlayer, AActor* Subject, AActor* Target, UEventBlackBoard* EventBlackBoard);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EEventActionResult GetResult() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform GetOriginTransform() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UEventPlayer* GetEventPlayer() const;
    
    UFUNCTION(BlueprintCallable)
    void FinishAction(EEventActionResult Result);
    
public:
    UFUNCTION(BlueprintCallable)
    void EndAction(APlayerController* ConsideringPlayer, AActor* Subject, AActor* Target, UEventBlackBoard* EventBlackBoard);
    
    UFUNCTION(BlueprintCallable)
    void AbortAction(APlayerController* ConsideringPlayer, AActor* Subject, AActor* Target, UEventBlackBoard* EventBlackBoard);
    
};

