#pragma once

#include "CoreMinimal.h"
#include "EWeaponSlots.generated.h"

UENUM(BlueprintType)
enum class EWeaponSlots : uint8
{
    Slot1 UMETA(DisplayName = "1"),
    Slot2 UMETA(DisplayName = "2"),
    Slot3 UMETA(DisplayName = "3"),
    Slot4 UMETA(DisplayName = "4"),
};