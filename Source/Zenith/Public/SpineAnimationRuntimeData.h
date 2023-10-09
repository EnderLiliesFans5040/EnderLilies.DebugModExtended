#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SpineAnimationDefinition.h"
#include "SpineAnimationRuntimeData.generated.h"

class UTrackEntry;

UCLASS()
class USpineAnimationRuntimeData : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    UTrackEntry* TrackEntry;
    
    UPROPERTY(Transient)
    TArray<FSpineAnimationDefinition> AnimDefinitions;
    
    UPROPERTY(Transient)
    TArray<UTrackEntry*> trackEntries;
    
    UPROPERTY(Transient)
    bool bStarted;
    
    UPROPERTY(Transient)
    bool bExecutedInterrupt;
    
    UPROPERTY(Transient)
    bool bExecutedComplete;
    
    UPROPERTY(Transient)
    bool bExecutedEnd;
    
    USpineAnimationRuntimeData();
};

