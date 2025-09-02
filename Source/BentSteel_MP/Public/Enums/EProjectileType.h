#pragma once

#include "CoreMinimal.h"
#include "EProjectileType.generated.h"

UENUM(BlueprintType)
enum class EProjectileType : uint8
{
	None 		UMETA(DisplayName = "None"),
    Bullet 		UMETA(DisplayName = "Bullet"),
    Rocket 		UMETA(DisplayName = "Rocket"),
    Grenade 	UMETA(DisplayName = "Grenade"),
    Spear 		UMETA(DisplayName = "Spear"),
};