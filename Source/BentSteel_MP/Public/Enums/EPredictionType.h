#pragma once

#include "CoreMinimal.h"
#include "EPredictionType.generated.h"

UENUM(BlueprintType)
enum class EPredictionType : uint8
{
    None 		    UMETA(DisplayName = "None"),
    SimpleLead 		UMETA(DisplayName = "Simple Lead"),
    AdvancedLead 	UMETA(DisplayName = "Advanced Lead"),
};