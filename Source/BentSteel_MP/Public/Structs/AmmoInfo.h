#pragma once

#include "CoreMinimal.h"
#include "Engine/Texture2D.h"
#include "GameFramework/Actor.h"
#include "Enums/EAmmo.h"
#include "Enums/EStatusEffect.h"
#include "Projectiles/BpProjectileParent.h"
#include "AmmoInfo.generated.h"

USTRUCT(BlueprintType)
struct FAmmoInfo
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    UTexture2D* Icon = nullptr;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    EAmmo AmmoType = EAmmo();

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FString DisplayName;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FString Description;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool bIsInfinite = false;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TSubclassOf<ABpProjectileParent> ProjectileObject;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float FlightSpeed = 0.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float BaseDamage = 0.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float HomingAccelMagnitude = 0.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float ArmorPierce = 0.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int32 MaxHeld = 0;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int32 CurrHeld = 0;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool bExplosive = false;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float ExplodeRadius = 0.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float DamageRadius = 0.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float DamageFalloffStart = 0.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float DamageFalloffEnd = 0.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float DamageFloor = 0.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    EStatusEffect StatusEffectType = EStatusEffect();

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float StatusEffectChance = 0.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float BounceCount = 0.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float Friction = 0.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int32 MaxPierce = 0;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float PierceReduction = 0.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float PierceFloor = 0.0f;
};