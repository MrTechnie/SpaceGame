// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SPickableItem.generated.h"



/*UINTERFACE(MinimalAPI, Blueprintable)
class UPickupItem : public UInterface {

public:

	virtual void PickupItem(FString NewItem);


};
*/


UCLASS()
class SPACEGAME_API ASPickableItem : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASPickableItem();
	
	


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};

