#pragma once

#include "CoreMinimal.h"
#include "EAmmo.generated.h"

UENUM(BlueprintType)
enum class EAmmo : uint8
{
    None     	UMETA(DisplayName = "None"),
    Bullets 	UMETA(DisplayName = "Bullets"),
    Shells 		UMETA(DisplayName = "Shells"),
    Rockets 	UMETA(DisplayName = "Rockets"),
    Energy 		UMETA(DisplayName = "Energy"),
    Fuel 		UMETA(DisplayName = "Fuel"),
    Mines	 	UMETA(DisplayName = "Mines"),
};