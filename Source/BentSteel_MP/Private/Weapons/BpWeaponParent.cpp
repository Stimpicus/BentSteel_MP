#include "Weapons/BpWeaponParent.h"

ABpWeaponParent::ABpWeaponParent()
{
    PrimaryActorTick.bCanEverTick = true;
}

void ABpWeaponParent::BeginPlay()
{
    Super::BeginPlay();
}

void ABpWeaponParent::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}