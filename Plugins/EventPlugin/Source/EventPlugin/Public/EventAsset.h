#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Camera/PlayerCameraManager.h"
#include "ActorBindingInfos.h"
#include "EventNode.h"
#include "Templates/SubclassOf.h"
#include "EventAsset.generated.h"

class AEventCamera;
class UObject;
class USkipEventAction;

UCLASS(Blueprintable)
class EVENTPLUGIN_API UEventAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AEventCamera> EventCameraClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayerUIFadeOutTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayerUIFadeInTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraBlendTimeOnEventFinished;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EViewTargetBlendFunction> CameraBlendFunctionOnEventFinished;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLockPlayerInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsSkippable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USkipEventAction> SkipEventAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowPause;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DisplayIdleSplines;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEventNode> Data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FActorBindingInfos> DefaultActorBindings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NextNodeId;
    
    UEventAsset();

    UFUNCTION(BlueprintCallable)
    TArray<FEventNode> GetNextNodes(FEventNode Node);
    
    UFUNCTION(BlueprintCallable)
    FEventNode GetFirstNode();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetEventName() const;
    
    UFUNCTION(BlueprintCallable)
    static void CallFunctionByName(UObject* Object, const FString& FunctionName);
    
};

