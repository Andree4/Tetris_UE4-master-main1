// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "VidaFactory.h"
#include "CreadorVidas.generated.h"

UCLASS()
class TETRIS_UE4_API ACreadorVidas : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACreadorVidas();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
private:
	IVidaFactory* Vida1;
	IVidaFactory* Vida2;
	IVidaFactory* Vida3;
	IVidaFactory* Estado;
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	UPROPERTY(EditAnywhere)
		UStaticMeshComponent* VidaMesh;

	UMaterialInterface* materialVida0;

	ACreadorVidas* iniciar();
	void cambiarVida(ACreadorVidas* _Vidas);
	void cambiarEstado(IVidaFactory* _Estado);
	IVidaFactory* getVida1();
	IVidaFactory* getVida2();
	IVidaFactory* getVida3();
	IVidaFactory* getEstado();
};
