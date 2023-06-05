// Fill out your copyright notice in the Description page of Project Settings.


#include "Vida3.h"
#include "CreadorVidas.h"

// Sets default values
AVida3::AVida3()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	materialVida0 = LoadObject<UMaterialInterface>(nullptr, TEXT("Material'/Game/Mesh/Invisible.Invisible'"));

}

// Called when the game starts or when spawned
void AVida3::BeginPlay()
{
	Super::BeginPlay();


}

// Called every frame
void AVida3::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AVida3::EstablecerVida(ACreadorVidas* _Vidas)
{
	FTransform SpawnLocation;

	GEngine->AddOnScreenDebugMessage(-1, 10, FColor::Black, TEXT("SIN VIDA"));


	_Vidas->VidaMesh->SetMaterial(0, materialVida0);


}

void AVida3::SetVida(ACreadorVidas* _Vidas)
{
	Vidas = _Vidas;
}

