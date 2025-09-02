#pragma once

#include "CoreMinimal.h"
#include "EStatusEffect.generated.h"

UENUM(BlueprintType)
enum class EStatusEffect : uint8
{
	None			UMETA(DisplayName = "None"),
    Burning			UMETA(DisplayName = "Burning"),
};