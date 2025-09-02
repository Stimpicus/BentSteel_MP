#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BpWeaponParent.generated.h"

UCLASS(Blueprintable)
class BENTSTEEL_MP_API ABpWeaponParent : public AActor
{
    GENERATED_BODY()

public:
    ABpWeaponParent();

protected:
    virtual void BeginPlay() override;

public:
    virtual void Tick(float DeltaTime) override;
};