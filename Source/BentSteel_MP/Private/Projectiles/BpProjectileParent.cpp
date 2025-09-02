#include "Projectiles/BpProjectileParent.h"

ABpProjectileParent::ABpProjectileParent()
{
    PrimaryActorTick.bCanEverTick = true;
}

void ABpProjectileParent::BeginPlay()
{
    Super::BeginPlay();
}

void ABpProjectileParent::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}