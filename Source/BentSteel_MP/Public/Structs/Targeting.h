#pragma once

#include "CoreMinimal.h"
#include "Engine/Texture2D.h"
#include "GameFramework/Actor.h"
#include "Enums/EPredictionTypes.h"
#include "Targeting.generated.h"

USTRUCT(BlueprintType)
struct FTargeting
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool bCanTrack = false;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float TurnSpeed = 0.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float MaxTrackAngle = 0.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    EPredictionTypes PredictType = EPredictionTypes();

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FString Description;
};