#pragma once
#include "CoreMinimal.h"
#include "ESpineBone.generated.h"

UENUM(BlueprintType)
enum class ESpineBone : uint8 {
    None,
    Feet = 10,
    Root = 50,
    Hip = 60,
    Head = 70,
    Eyes,
    Mouth,
    FootRight = 100,
    FootLeft = 110,
    HandRight = 120,
    HandLeft = 130,
    FX_01 = 180,
    FX_02,
    FX_03,
    Hitbox_01 = 200,
    Hitbox_02 = 210,
    Weapon_01 = 230,
    Weapon_02,
    Weapon_03,
    Custom = 255,
};

