#pragma once

#include "CoreMinimal.h"
#include "Curves/CurveFloat.h"
#include "Weapons/BpWeaponParent.h"
#include "Projectiles/BpProjectileParent.h"
#include "WeaponInfo.generated.h"

USTRUCT(BlueprintType)
struct FWeaponInfo
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ABpWeaponParent* WeaponInstance = nullptr;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TSubclassOf<ABpWeaponParent> WeapBp;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    EWeaponSlots WeaponSlot = EWeaponSlots();

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    EFireType FireType = EFireType();

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FString WeapName;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    EAmmo AmmoType = EAmmo();

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int32 MaxAmmo = 0;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int32 CurrAmmo = 0;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TSubclassOf<ABpProjectileParent> ProjectileObject;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int32 PoolSize = 0;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int32 FireCost = 0;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    EHitType HitType = EHitType();

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool bIsFiring = false;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float DamageMod = 0.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float FireRate = 0.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float EffRange = 0.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool bShotPierce = false;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int32 MaxPierce = 0;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float ReducePierce = 0.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float ReduceFloor = 0.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float ReloadTime = 0.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool bTarget = false;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool bLockXAxis = false;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool bLockYAxis = false;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool bLockZAxis = false;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool bRotateSpeed = false;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float RotateSpeed = 0.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int32 BurstCount = 0;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float BurstDelay = 0.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float ChargeMin = 0.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float ChargeMax = 0.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    UCurveFloat* ChargeCurve = nullptr;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float ChargeRate = 0.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float ChargeOhThreshold = 0.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float ChargeOhTime = 0.0f;
};