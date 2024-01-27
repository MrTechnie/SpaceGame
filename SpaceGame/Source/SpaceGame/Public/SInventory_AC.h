// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SInventory_AC.generated.h"

class UInventoryComponent

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class SPACEGAME_API USInventory_AC : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	USInventory_AC();

	

	UInventoryComponent* Inventory;

protected:
	// Called when the game starts
	virtual void BeginPlay() override;


	void AddItemToInventory();

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
