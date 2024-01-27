// Fill out your copyright notice in the Description page of Project Settings.


#include "SInventory_AC.h"

// Sets default values for this component's properties
USInventory_AC::USInventory_AC()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...

	

	


	


}


// Called when the game starts
void USInventory_AC::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


void USInventory_AC::AddItemToInventory(FString NewItem)
{

	

	Inventory.Add(NewItem); //adds item to array


	GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Red, NewItem);


	
	



}

// Called every frame
void USInventory_AC::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

