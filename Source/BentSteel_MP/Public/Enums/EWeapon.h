#pragma once

#include "CoreMinimal.h"
#include "EWeapon.generated.h"

UENUM(BlueprintType)
enum class EWeapon : uint8
{
	None			UMETA(DisplayName = "None"),
    bpRoofTurret	UMETA(DisplayName = "bpRoofTurret"),
};