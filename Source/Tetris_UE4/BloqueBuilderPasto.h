// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Block.h"
#include "BloqueBuilder.h"
#include "BloqueBuilderPasto.generated.h"

/**
 * 
 */
UCLASS()
class TETRIS_UE4_API ABloqueBuilderPasto : public ABlock, public IBloqueBuilder
{
	GENERATED_BODY()
public:
	ABloqueBuilderPasto();
	FString Material;
	virtual void SetMaterial(FString myMaterial);
	
};
