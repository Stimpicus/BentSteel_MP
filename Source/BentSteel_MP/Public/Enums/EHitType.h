#pragma once

#include "CoreMinimal.h"
#include "EHitType.generated.h"

UENUM(BlueprintType)
enum class EHitType : uint8
{
    None 			UMETA(DisplayName = "None"),
    Hitscan 		UMETA(DisplayName = "Hitscan"),
    Projectile 		UMETA(DisplayName = "Projectile"),
    Cone 			UMETA(DisplayName = "Cone"),
    Radius 			UMETA(DisplayName = "Radius"),
    Beam 			UMETA(DisplayName = "Beam"),
	Deployable		UMETA(DisplayName = "Deployable"),
};