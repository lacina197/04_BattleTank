// Copyright EmbraceIT Ltd.

#pragma once

#include "GameFramework/Pawn.h"
#include "Tank.generated.h" // Put new includes above

<<<<<<< HEAD
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FTankDelegate);

=======
// Forward declarations
class UTankBarrel;
class UTankAimingComponent;
class UTankMovementComponent;
class AProjectile;
>>>>>>> parent of 8727aa9... BT p298

UCLASS()
class BATTLETANK_API ATank : public APawn
{
	GENERATED_BODY()

public:

	// Called by the engine when actor damage is dealt
	virtual float TakeDamage
	(
    	float DamageAmount,
    	struct FDamageEvent const & DamageEvent,
    	class AController * EventInstigator,
    	AActor * DamageCauser
	) override;

<<<<<<< HEAD
=======
	UPROPERTY(BlueprintReadOnly)
	UTankMovementComponent* TankMovementComponent = nullptr;

private:
>>>>>>> parent of 8727aa9... BT p298
	// Sets default values for this pawn's properties
	ATank();

	virtual void BeginPlay() override;

	// Return current health as a percentage of starting health, between 0 and 1
	UFUNCTION(BlueprintPure, Category = "Health")
	float GetHealthPercent() const;

	FTankDelegate OnDeath;

	
private:

	UPROPERTY(EditDefaultsOnly, Category = "Setup")
	int32 StartingHealth = 100;

	UPROPERTY(EditDefaultsOnly, Category = "Health")
	int32 CurrentHealth;  // Initiliased in BeginPlay


};
