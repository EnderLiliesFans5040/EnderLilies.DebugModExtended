#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ActorBindingInfos.h"
#include "Engine/DataAsset.h"
#include "Camera/PlayerCameraManager.h"
#include "EventNode.h"
#include "EventAsset.generated.h"

class USkipEventAction;
class AEventCamera;
class UObject;

UCLASS(BlueprintType)
class EVENTPLUGIN_API UEventAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<AEventCamera> EventCameraClass;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float PlayerUIFadeOutTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float PlayerUIFadeInTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float CameraBlendTimeOnEventFinished;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<EViewTargetBlendFunction> CameraBlendFunctionOnEventFinished;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bLockPlayerInput;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bIsSkippable;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<USkipEventAction> SkipEventAction;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bAllowPause;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool DisplayIdleSplines;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText Name;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FEventNode> Data;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<FName, FActorBindingInfos> DefaultActorBindings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 NextNodeId;
    
    UEventAsset();
    UFUNCTION(BlueprintCallable)
    TArray<FEventNode> GetNextNodes(FEventNode Node);
    
    UFUNCTION(BlueprintCallable)
    FEventNode GetFirstNode();
    
    UFUNCTION(BlueprintPure)
    FName GetEventName() const;
    
    UFUNCTION(BlueprintCallable)
    static void CallFunctionByName(UObject* Object, const FString& FunctionName);
    
};

