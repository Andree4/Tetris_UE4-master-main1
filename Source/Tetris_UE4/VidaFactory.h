// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "VidaFactory.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UVidaFactory : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class TETRIS_UE4_API IVidaFactory
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	virtual void EstablecerVida(class ACreadorVidas* _Vidas) = 0;
	virtual void SetVida(class ACreadorVidas* Vidas) = 0;
};
