#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "ZenithCharacterEvent.generated.h"

class UZenithInputComponent;
class ULocomotionComponent;

UCLASS()
class ZENITH_API AZenithCharacterEvent : public ACharacter {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UZenithInputComponent* ZenithInputComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    ULocomotionComponent* LocomotionComponent;
    
public:
    AZenithCharacterEvent();
};

