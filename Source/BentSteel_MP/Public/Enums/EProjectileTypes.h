#pragma once

#include "CoreMinimal.h"
#include "EProjectileTypes.generated.h"

UENUM(BlueprintType)
enum class EProjectileTypes : uint8
{
    Bullet 		UMETA(DisplayName = "Bullet"),
    Rocket 		UMETA(DisplayName = "Rocket"),
    Grenade 	UMETA(DisplayName = "Grenade"),
    Spear 		UMETA(DisplayName = "Spear"),
};