#pragma once

#include "CoreMinimal.h"
#include "EPredictionTypes.generated.h"

UENUM(BlueprintType)
enum class EPredictionTypes : uint8
{
    NoTracking 		UMETA(DisplayName = "No Tracking"),
    SimpleLead 		UMETA(DisplayName = "Simple Lead"),
    AdvancedLead 	UMETA(DisplayName = "Advanced Lead"),
};