#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ESpineBone.h"
#include "AbilityParams.h"
#include "UObject/NoExportTypes.h"
#include "AbilityDescription.generated.h"

class AAbility;

USTRUCT(BlueprintType)
struct ZENITH_API FAbilityDescription {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSubclassOf<AAbility> AbilityClass;
    
    UPROPERTY(EditAnywhere)
    FAbilityParams AbilityParameters;
    
    UPROPERTY(EditAnywhere)
    FTransform Offset;
    
    UPROPERTY(EditAnywhere)
        ESpineBone SpawnBone;
    
    UPROPERTY(EditAnywhere)
    FName CustomSpawnBone;
    
    UPROPERTY(EditAnywhere)
    bool bFollowSpawnBoneRotation;
    
    UPROPERTY(EditAnywhere)
        ESpineBone AttachBone;
    
    UPROPERTY(EditAnywhere)
    FName CustomAttachBone;
    
    UPROPERTY(EditAnywhere)
    bool bFollowAttachBoneRotation;
    
    UPROPERTY(EditAnywhere)
    bool bFireAndForget;
    
    FAbilityDescription();
};

