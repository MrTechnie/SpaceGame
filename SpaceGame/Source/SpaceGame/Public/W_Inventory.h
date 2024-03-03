// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UMG/Public/Components/CanvasPanel.h"
#include "UMG/Public/Components/Widget.h"
#include "W_Inventory.generated.h"

class UCanvasPanel;
/**
 * 
 */
UCLASS()
class SPACEGAME_API UW_Inventory : public UWidget
{
	GENERATED_BODY()
	
public:

	UCanvasPanel* CanvasPannel;
 

};
