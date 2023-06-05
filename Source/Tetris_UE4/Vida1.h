// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "VidaFactory.h"
#include "Vida1.generated.h"

UCLASS()
class TETRIS_UE4_API AVida1 : public AActor, public IVidaFactory
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AVida1();
private:

	UPROPERTY()
		class ACreadorVidas* Vidas;

	UMaterialInterface* materialVida0;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	virtual void EstablecerVida(class ACreadorVidas* _Vidas) override;
	virtual void SetVida(class ACreadorVidas* _Vidas) override;
};
