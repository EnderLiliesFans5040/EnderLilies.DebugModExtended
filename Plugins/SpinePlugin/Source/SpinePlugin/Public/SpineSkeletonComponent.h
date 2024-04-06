#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "SpineAfterUpdateWorldTransformDelegateDelegate.h"
#include "SpineBeforeUpdateWorldTransformDelegateDelegate.h"
#include "SpineSkeletonComponent.generated.h"

class USpineAtlasAsset;
class USpineSkeletonDataAsset;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SPINEPLUGIN_API USpineSkeletonComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USpineAtlasAsset* Atlas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USpineSkeletonDataAsset* SkeletonData;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpineBeforeUpdateWorldTransformDelegate BeforeUpdateWorldTransform;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpineAfterUpdateWorldTransformDelegate AfterUpdateWorldTransform;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USpineAtlasAsset* lastAtlas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USpineSkeletonDataAsset* lastData;
    
public:
    USpineSkeletonComponent(/*const FObjectInitializer& ObjectInitializer*/);

    UFUNCTION(BlueprintCallable)
    void UpdateWorldTransform();
    
    UFUNCTION(BlueprintCallable)
    void SetToSetupPose();
    
    UFUNCTION(BlueprintCallable)
    void SetSlotsToSetupPose();
    
    UFUNCTION(BlueprintCallable)
    bool SetSkins(const TArray<FString>& SkinNames);
    
    UFUNCTION(BlueprintCallable)
    bool SetSkinCollection(FName SkinCollectionName);
    
    UFUNCTION(BlueprintCallable)
    bool SetSkin(const FString& SkinName);
    
    UFUNCTION(BlueprintCallable)
    void SetScaleY(float ScaleY);
    
    UFUNCTION(BlueprintCallable)
    void SetScaleX(float ScaleX);
    
    UFUNCTION(BlueprintCallable)
    void SetBoneWorldPosition(const FString& BoneName, const FVector& Position);
    
    UFUNCTION(BlueprintCallable)
    void SetBonesToSetupPose();
    
    UFUNCTION(BlueprintCallable)
    bool SetAttachment(const FString& SlotName, const FString& attachmentName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasUpdatedThisFrame() const;
    
    UFUNCTION(BlueprintCallable)
    bool HasSlot(const FString& SlotName);
    
    UFUNCTION(BlueprintCallable)
    bool HasSkin(const FString& SkinName);
    
    UFUNCTION(BlueprintCallable)
    bool HasBone(const FString& BoneName);
    
    UFUNCTION(BlueprintCallable)
    bool HasAnimation(const FString& AnimationName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetSlots(TArray<FString>& Slots);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetSkins(TArray<FString>& Skins);
    
    UFUNCTION(BlueprintCallable)
    float GetScaleY();
    
    UFUNCTION(BlueprintCallable)
    float GetScaleX();
    
    UFUNCTION(BlueprintCallable)
    FTransform GetBoneWorldTransform(const FString& BoneName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetBones(TArray<FString>& Bones);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetAnimations(TArray<FString>& Animations);
    
    UFUNCTION(BlueprintCallable)
    float GetAnimationDuration(const FString& AnimationName);
    
};

