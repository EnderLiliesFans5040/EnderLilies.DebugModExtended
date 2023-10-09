#pragma once
#include "CoreMinimal.h"
#include "EEventNodeType.h"
#include "EEventActorType.h"
#include "UObject/NoExportTypes.h"
#include "EventNode.generated.h"

class UDialogueWave;
class UEventAction;
class UEventCondition;

USTRUCT(BlueprintType)
struct FEventNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EEventNodeType NodeType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EEventActorType ActorSubject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName ActorSubjectBinding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EEventActorType ActorTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName ActorTargetBinding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText Text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<int32> Links;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector2D Coordinates;
    
    UPROPERTY(EditDefaultsOnly, Instanced)
    TArray<UEventAction*> Actions;
    
    UPROPERTY(EditDefaultsOnly, Instanced)
    TArray<UEventCondition*> Conditions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UDialogueWave* DialogueWave;
    
    EVENTPLUGIN_API FEventNode();
};

