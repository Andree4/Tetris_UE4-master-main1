// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Block.h"/*
#include "Observable.h"*/
#include "BloqueBuilder.h"
#include "BloqueBuilderAzul.generated.h"

UCLASS()
class TETRIS_UE4_API ABloqueBuilderAzul : public ABlock, public IBloqueBuilder/*, public IObservable*/
{
	GENERATED_BODY()
public:	
	// Sets default values for this actor's properties
	ABloqueBuilderAzul();
	FString Material;
	virtual void SetMaterial(FString myMaterial);

//	 static ABloqueBuilderAzul* instancia; //Puntero a instancia (nullptr)
//	 static ABloqueBuilderAzul* GetInstanciaBloqA(); //Obtener instancia 
//public:
//	virtual void RegisterObserver(IObserver* Observer) override;
//	virtual void RemoveObserver(IObserver* Observer) override;
//	virtual void NotifyObservers() override;
//
//	TArray<IObserver*> Observers;
};
