// Fill out your copyright notice in the Description page of Project Settings.


#include "SCharacter.h"
#include <Camera/CameraComponent.h>
#include <GameFramework/SpringArmComponent.h>
#include <GameFramework/CharacterMovementComponent.h>
#include <Components/InputComponent.h>
#include <UObject/Object.h>
#include <GameFramework/Character.h>
#include <TimerManager.h>
#include <Engine/World.h>

// Sets default values
ASCharacter::ASCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SpringArmComp = CreateDefaultSubobject<USpringArmComponent>("SpringArmComp");
	SpringArmComp->SetupAttachment(RootComponent);

	CameraComp = CreateDefaultSubobject<UCameraComponent>("CameraComp");
	CameraComp->SetupAttachment(SpringArmComp);

	SpringArmComp->bUsePawnControlRotation = true;

	bUseControllerRotationYaw = true;
	bUseControllerRotationPitch = false;


	//Jump Properties

	GetCharacterMovement()->JumpOffJumpZFactor = 100.0f;
	GetCharacterMovement()->JumpZVelocity = 500.0f;
	GetCharacterMovement()->AirControl = 50.0f;

	//Crouch Properties
	
	bCrouchCooldown = false;
	CrouchCooldownDuration = 0.15f;
	GetCharacterMovement()->MaxWalkSpeedCrouched = 200.0f;
	GetCharacterMovement()->SetCrouchedHalfHeight(60.0f);
	
}

// Called when the game starts or when spawned
void ASCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

void ASCharacter::MoveForward(float value)
{
	AddMovementInput(GetActorForwardVector(), value);
}

void ASCharacter::MoveRight(float value)

{
	AddMovementInput(GetActorRightVector(), value);


}


void ASCharacter::MakeJump()
{

	Super::Jump();


}

void ASCharacter::CrouchDelay()
{
	
	bCrouchCooldown = true;
	
	GetWorld()->GetTimerManager().SetTimer(CoolDownTimerHandle, this, &ASCharacter::ResetCrouchDelay, CrouchCooldownDuration, false);



}

void ASCharacter::ResetCrouchDelay()
{
	bCrouchCooldown = false;

}

void ASCharacter::LetCrouch()
{

	if (!bCrouchCooldown)
	{
		if (GetCharacterMovement()->IsCrouching())
		{
			Super::UnCrouch();
			CrouchDelay();
		}

		else
		{
			Super::Crouch();
			CrouchDelay();
		}
	}

}




// Called every frame
void ASCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ASCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	//Camera Control
	PlayerInputComponent->BindAxis("MoveForward", this, &ASCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &ASCharacter::MoveRight);
	PlayerInputComponent->BindAxis("LookSide", this, &APawn::AddControllerYawInput);
	PlayerInputComponent->BindAxis("LookUp", this, &APawn::AddControllerPitchInput);
	
	//Locomotion
	PlayerInputComponent->BindAction("MakeJump", IE_Pressed, this, &ASCharacter::MakeJump);
	PlayerInputComponent->BindAction("LetCrouch", IE_Pressed, this, &ASCharacter::LetCrouch);


}

