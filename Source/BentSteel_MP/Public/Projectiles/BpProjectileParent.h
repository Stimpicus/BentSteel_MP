#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BpProjectileParent.generated.h"

UCLASS(Blueprintable)
class BENTSTEEL_MP_API ABpProjectileParent : public AActor
{
    GENERATED_BODY()

public:
    ABpProjectileParent();

protected:
    virtual void BeginPlay() override;

public:
    virtual void Tick(float DeltaTime) override;
};