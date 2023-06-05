// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Observer.h"
#include "Pieces.h"
#include "GameFramework/Actor.h"
#include "Viewer.generated.h"

UCLASS()
class TETRIS_UE4_API AViewer : public AActor, public IObserver
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AViewer();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	virtual void OnNotify() override;
};
