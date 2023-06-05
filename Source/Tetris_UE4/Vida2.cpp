// Fill out your copyright notice in the Description page of Project Settings.


#include "Vida2.h"
#include "CreadorVidas.h"

// Sets default values
//AVida2::AVida2()
//{
//    // Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
//    PrimaryActorTick.bCanEverTick = true;
//
//    VidaMesh = CreateDefaultSubobject<UStaticMeshComponent>("Block Mesh");
//    RootComponent = VidaMesh;
//
//    static ConstructorHelpers::FObjectFinder<UStaticMesh> BlockFinder(TEXT("StaticMesh'/Game/Mesh/Vida.Vida'"));
//    if (BlockFinder.Succeeded())
//    {
//        VidaMesh->SetStaticMesh(BlockFinder.Object);
//        VidaMesh->SetRelativeScale3D(FVector(0.2f, 0.2f, 0.2f));
//    }
//    else
//    {
//        UE_LOG(LogTemp, Warning, TEXT("mesh not found"));
//    }
//}
AVida2::AVida2()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	materialVida0 = LoadObject<UMaterialInterface>(nullptr, TEXT("Material'/Game/Mesh/Material_6.Material_6'"));

}

// Called when the game starts or when spawned
void AVida2::BeginPlay()
{
	Super::BeginPlay();


}

// Called every frame
void AVida2::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AVida2::EstablecerVida(ACreadorVidas* _Vidas)
{
	FTransform SpawnLocation;

	GEngine->AddOnScreenDebugMessage(-1, 10, FColor::Red, TEXT("MUY POCA VIDA"));


	_Vidas->VidaMesh->SetMaterial(0, materialVida0);


	Vidas->cambiarEstado(Vidas->getVida3());
}

void AVida2::SetVida(ACreadorVidas* _Vidas)
{
	Vidas = _Vidas;
}
