#pragma once

#include "CoreMinimal.h"
#include "EFireType.generated.h"

UENUM(BlueprintType)
enum class EFireType : uint8
{
    None 			UMETA(DisplayName = "None"),
    Single 			UMETA(DisplayName = "Single"),
    Automatic 		UMETA(DisplayName = "Automatic"),
    Burst 			UMETA(DisplayName = "Burst"),
    Continuous 		UMETA(DisplayName = "Continuous"),
    Charge 			UMETA(DisplayName = "Charge"),
};