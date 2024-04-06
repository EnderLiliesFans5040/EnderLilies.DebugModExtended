#pragma once
#include "CoreMinimal.h"
#include "SpineSkinCollection.generated.h"

USTRUCT(BlueprintType)
struct SPINEPLUGIN_API FSpineSkinCollection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> Skins;
    
    FSpineSkinCollection();
};

