// Fill out your copyright notice in the Description page of Project Settings.


#include "SCharacter.h"
#include <Camera/CameraComponent.h>
#include <GameFramework/SpringArmComponent.h>
#include <GameFramework/CharacterMovementComponent.h>
#include <Components/InputComponent.h>

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
	
	//bCrouchCooldown = false;
	float CrouchCooldownDuration = 1.0f;
	GetCharacterMovement()->MaxWalkSpeedCrouched = 200.0f;
	GetCharacterMovement()->CrouchedHalfHeight = 60.0f;
	
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


void ASCharacter::Jump()
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

void ASCharacter::Crouch()

{
	if (bCrouchCooldown == false) {

		Super::Crouch();
		CrouchDelay();
	}

	//nothing should happen if ShouldWait is true, as the function should not be executed.

}

void ASCharacter::UnCrouch()
{
	
	if (bCrouchCooldown == false) {

		Super::UnCrouch();
		CrouchDelay();
	}


	//nothing should happen if ShouldWait is true, as the function should not be executed.
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
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ASCharacter::Jump);
	PlayerInputComponent->BindAction("Crouch", IE_Pressed, this, &ASCharacter::Crouch);
	PlayerInputComponent->BindAction("UnCrouch", IE_Released, this, &ASCharacter::UnCrouch);
}

