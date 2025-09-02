#pragma once

#include "CoreMinimal.h"
#include "EProjectileType.generated.h"

UENUM(BlueprintType)
enum class EProjectileType : uint8
{
    Bullet 		UMETA(DisplayName = "Bullet"),
    Rocket 		UMETA(DisplayName = "Rocket"),
    Grenade 	UMETA(DisplayName = "Grenade"),
    Spear 		UMETA(DisplayName = "Spear"),
};