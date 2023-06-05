// Fill out your copyright notice in the Description page of Project Settings.


#include "Viewer.h"
// Sets default values
AViewer::AViewer()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AViewer::BeginPlay()
{
	
}

// Called every frame
void AViewer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AViewer::OnNotify()
{
	GEngine->AddOnScreenDebugMessage(-1, 10, FColor::Yellow, TEXT("NuevoBloqueBuilderAzul"));
}







