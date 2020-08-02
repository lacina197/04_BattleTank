// Fill out your copyright notice in the Description page of Project Settings.

#include "BattleTank.h"
<<<<<<< HEAD
=======
#include "TankBarrel.h"
#include "Projectile.h"
#include "TankAimingComponent.h"
#include "TankMovementComponent.h"
>>>>>>> parent of 8727aa9... BT p298
#include "Tank.h"


// Sets default values
ATank::ATank()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
}

void ATank::BeginPlay()
{
	Super::BeginPlay(); // Needed for BP Begin Play to run!
	// İstersek bu kısım tamamen kaldırılabilir çünkü BP içinde halledildi.

	CurrentHealth = StartingHealth;
}

float ATank::TakeDamage
(
    float DamageAmount,
    struct FDamageEvent const & DamageEvent,
    class AController * EventInstigator,
    AActor * DamageCauser
)
{
<<<<<<< HEAD
	int32 DamagePoints = FPlatformMath::RoundToInt(DamageAmount);
	int32 DamageToApply = FMath::Clamp(DamagePoints,0,CurrentHealth); 

	UE_LOG(LogTemp, Warning, TEXT("DamageAmount=%f, DamageToApply=%i"),DamageAmount,DamageToApply);

	CurrentHealth -= DamageToApply;
	if (CurrentHealth <= 0)
=======
	if (!TankAimingComponent) { return; }
	TankAimingComponent->AimAt(HitLocation, LaunchSpeed);
}

void ATank::Fire()
{
	bool isReloaded = (FPlatformTime::Seconds() - LastFireTime) > ReloadTimeInSeconds;

	if (Barrel && isReloaded)
>>>>>>> parent of 8727aa9... BT p298
	{
		OnDeath.Broadcast();
	}
	
	return DamageToApply;
}

float ATank::GetHealthPercent() const
{
	return (float)CurrentHealth / (float)StartingHealth;
}
