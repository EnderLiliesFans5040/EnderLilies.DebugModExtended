#pragma once
#include "CoreMinimal.h"
#include "ESpineBone.generated.h"

UENUM(BlueprintType)
enum class ESpineBone : uint8 {
    None,
    Feet = 0xA,
    Root = 0x32,
    Hip = 0x3C,
    Head = 0x46,
    Eyes,
    Mouth,
    FootRight = 0x64,
    FootLeft = 0x6E,
    HandRight = 0x78,
    HandLeft = 0x82,
    FX_01 = 0xB4,
    FX_02,
    FX_03,
    Hitbox_01 = 0xC8,
    Hitbox_02 = 0xD2,
    Weapon_01 = 0xE6,
    Weapon_02,
    Weapon_03,
    Custom = 0xFF,
};

