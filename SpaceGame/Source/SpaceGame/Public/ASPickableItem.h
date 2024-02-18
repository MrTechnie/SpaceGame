// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SphereComponent.h"
#include "ASPickableItem.generated.h"

class USphereComponent;
class UStaticMeshComponent;



UCLASS()
class SPACEGAME_API ASPickableItem : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASPickableItem();
	
	USphereComponent* Trigger;
	UStaticMeshComponent* StaticMesh;
	


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};

