#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "ZenithCharacterEvent.generated.h"

class ULocomotionComponent;
class UZenithInputComponent;

UCLASS(Blueprintable)
class ZENITH_API AZenithCharacterEvent : public ACharacter {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UZenithInputComponent* ZenithInputComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULocomotionComponent* LocomotionComponent;
    
public:
    AZenithCharacterEvent(const FObjectInitializer& ObjectInitializer);

};

