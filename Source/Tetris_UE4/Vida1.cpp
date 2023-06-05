// Fill out your copyright notice in the Description page of Project Settings.


#include "Vida1.h"
#include "CreadorVidas.h"

// Sets default values
AVida1::AVida1()
{
    // Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
    PrimaryActorTick.bCanEverTick = true;

	materialVida0 = LoadObject<UMaterialInterface>(nullptr, TEXT("Material'/Game/Mesh/Material_4.Material_4'"));

}

// Called when the game starts or when spawned
void AVida1::BeginPlay()
{
	Super::BeginPlay();
	
	
}

// Called every frame
void AVida1::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AVida1::EstablecerVida(ACreadorVidas* _Vidas)
{
	FTransform SpawnLocation;

	GEngine->AddOnScreenDebugMessage(-1, 10, FColor::Yellow, TEXT("MEDIA VIDA"));


	_Vidas->VidaMesh->SetMaterial(0, materialVida0);


	Vidas->cambiarEstado(Vidas->getVida2());
}

void AVida1::SetVida(ACreadorVidas* _Vidas)
{
	Vidas = _Vidas;
}

