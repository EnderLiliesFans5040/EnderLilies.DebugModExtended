#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "StringBPFLibrary.generated.h"

UCLASS(Blueprintable)
class UStringBPFLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UStringBPFLibrary();

    UFUNCTION(BlueprintCallable)
    static TArray<FString> Sort(UPARAM(Ref) TArray<FString>& Array);
    
    UFUNCTION(BlueprintCallable)
    static FString ConvertTimeToString(float TimeInSeconds);
    
};

