#pragma once
#include "CoreMinimal.h"
#include "ActorArray.generated.h"

class AActor;

USTRUCT()
struct FActorArray {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<AActor*> Entries;
    
    ZENITH_API FActorArray();
};

