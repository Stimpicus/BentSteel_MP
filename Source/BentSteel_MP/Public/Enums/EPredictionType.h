#pragma once

#include "CoreMinimal.h"
#include "EPredictionType.generated.h"

UENUM(BlueprintType)
enum class EPredictionType : uint8
{
    NoTracking 		UMETA(DisplayName = "No Tracking"),
    SimpleLead 		UMETA(DisplayName = "Simple Lead"),
    AdvancedLead 	UMETA(DisplayName = "Advanced Lead"),
};