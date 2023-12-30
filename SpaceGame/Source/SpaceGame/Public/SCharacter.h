// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "SCharacter.generated.h"

class UCameraComponent;
class USpringArmComponent;

UCLASS()
class SPACEGAME_API ASCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ASCharacter();
	

	UPROPERTY(VisibleAnywhere)
	UCameraComponent* CameraComp;

	UPROPERTY(VisibleAnywhere)
	USpringArmComponent* SpringArmComp;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	//Basic Movement
	void MoveForward(float value);
	void MoveRight(float value);
	void Jump();

	//Crouch Functions
   void Crouch();
	void UnCrouch();
	void CrouchDelay();
	void ResetCrouchDelay(); 

	//Crouch Member Variables

	FTimerHandle CoolDownTimerHandle;
	bool bCrouchCooldown; 
	float CrouchCooldownDuration;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
