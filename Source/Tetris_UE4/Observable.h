// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Observer.h"
#include "UObject/Interface.h"
#include "Observable.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UObservable : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class TETRIS_UE4_API IObservable
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	virtual void RegisterObserver(IObserver* Observer) = 0;
	virtual void RemoveObserver(IObserver* Observer) = 0;
	virtual void NotifyObservers() = 0;

};
