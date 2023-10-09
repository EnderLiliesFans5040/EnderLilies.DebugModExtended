#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "EZenithError.h"
#include "ErrorSubsystem.generated.h"

class UUserWidget;

UCLASS(BlueprintType)
class ZENITH_API UErrorSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    TSubclassOf<UUserWidget> ErrorWidgetClass;
    
public:
    UErrorSubsystem();
    UFUNCTION(BlueprintCallable)
    void ReportError(EZenithError Error);
    
};

