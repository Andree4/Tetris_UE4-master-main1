// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Block.h"
#include "BloqueBuilder.h"
#include "BloqueBuilderLadrillo.generated.h"

/**
 * 
 */
UCLASS()
class TETRIS_UE4_API ABloqueBuilderLadrillo : public ABlock, public IBloqueBuilder
{
	GENERATED_BODY()
public:
	ABloqueBuilderLadrillo();
	FString Material;
	virtual void SetMaterial(FString myMaterial);
};
