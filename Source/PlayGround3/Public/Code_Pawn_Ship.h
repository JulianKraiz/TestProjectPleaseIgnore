// Fill out your copyright notice in the Description page of Project Settings.
#include "GameFramework/Pawn.h"
#include "ShipMovementComponent.h"
#include "Code_Pawn_Ship.generated.h"

UCLASS()
class PLAYGROUND3_API ACode_Pawn_Ship : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ACode_Pawn_Ship();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Called every frame
	virtual void Tick(float DeltaSeconds) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* InputComponent) override;

	class UCollidingPawnMovementComponent* OurMovementComponent;

	virtual UPawnMovementComponent* GetMovementComponent() const override;

	void MoveForward(float AxisValue);
	void MoveRight(float AxisValue);
	void Turn(float AxisValue);
	void ParticleToggle();
};