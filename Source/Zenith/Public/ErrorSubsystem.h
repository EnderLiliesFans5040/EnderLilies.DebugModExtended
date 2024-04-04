#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "EZenithError.h"
#include "Templates/SubclassOf.h"
#include "ErrorSubsystem.generated.h"

class UUserWidget;

UCLASS(Blueprintable)
class ZENITH_API UErrorSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> ErrorWidgetClass;
    
public:
    UErrorSubsystem();

    UFUNCTION(BlueprintCallable)
    void ReportError(EZenithError Error);
    
};

