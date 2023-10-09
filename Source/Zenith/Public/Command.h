#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ECommandInputTypes.h"
#include "UObject/Object.h"
#include "ECommandResult.h"
#include "EAptitudeType.h"
#include "Engine/EngineTypes.h"
#include "Command.generated.h"

class UState;
class UCommandAction;

UCLASS()
class ZENITH_API UCommand : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 CommandID;
    
    UPROPERTY()
    ECommandResult CurrentResult;
    
    UPROPERTY()
    float TTL;
    
    UPROPERTY()
    bool bRemoveIfNotStartable;
    
    UPROPERTY()
    TArray<TSubclassOf<UState>> NecessaryStates;
    
    UPROPERTY()
    TArray<TSubclassOf<UState>> ForbiddenStates;
    
    UPROPERTY()
    TArray<EAptitudeType> NecessaryAptitudes;
    
    UPROPERTY()
    TArray<EAptitudeType> ForbiddenAptitudes;
    
    UPROPERTY()
    TArray<TEnumAsByte<EMovementMode>> ValidMovementModes;
    
    UPROPERTY()
    ECommandInputTypes CommandInputType;
    
    UPROPERTY()
    UCommandAction* CommandAction;
    
    UPROPERTY()
    int32 GroupID;
    
    UPROPERTY()
    int32 FrameID;
    
    UCommand();
};

