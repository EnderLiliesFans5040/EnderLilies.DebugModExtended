#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Engine/EngineTypes.h"
#include "DirectionInputProfile.h"
#include "ECommandInputTypes.h"
#include "EAptitudeType.h"
#include "CommandSettings.generated.h"

class UCommandAction;
class UState;

USTRUCT(BlueprintType)
struct FCommandSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FName ItemRowName;
    
    UPROPERTY()
    int32 RuntimeID;
    
    UPROPERTY(EditAnywhere)
    int32 Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FDirectionInputProfile DirectionInputProfile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ECommandInputTypes CommandInputType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BufferTTL;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bRemoveIfNotStartable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool AlwaysFireWhileCommandPressed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool FireOnDirectionChangeOnly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<TSubclassOf<UState>> NecessaryStates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<TSubclassOf<UState>> ForbiddenStates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<EAptitudeType> NecessaryAptitudes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<EAptitudeType> ForbiddenAptitudes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<TEnumAsByte<EMovementMode>> ValidMovementModes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UCommandAction> CommandActionType;
    
    UPROPERTY()
    int32 GroupID;
    
    ZENITH_API FCommandSettings();
};

