// Fill out your copyright notice in the Description page of Project Settings.


#include "CreadorVidas.h"
#include "VidaFactory.h"
#include "Vida1.h"
#include "Vida2.h"
#include "Vida3.h"

// Sets default values
ACreadorVidas::ACreadorVidas()
{
    // Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
    PrimaryActorTick.bCanEverTick = true;

    VidaMesh = CreateDefaultSubobject<UStaticMeshComponent>("Vida Mesh");
    RootComponent = VidaMesh;

    static ConstructorHelpers::FObjectFinder<UStaticMesh> VidasV(TEXT("StaticMesh'/Game/Mesh/Enemigo.Enemigo'"));
    //StaticMesh'/Game/Mesh/block.block'
    if (VidasV.Succeeded())
    {
        VidaMesh->SetStaticMesh(VidasV.Object);
        VidaMesh->SetRelativeLocation(FVector( 1000.0 , 1000.0, 1000.0));
        VidaMesh->SetWorldScale3D(FVector(0.1f, 0.1f, 0.1f));
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("mesh not found"));
    }

    materialVida0 = LoadObject<UMaterialInterface>(nullptr, TEXT("Material'/Game/Mesh/Material_3.Material_3'"));
}

// Called when the game starts or when spawned
void ACreadorVidas::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACreadorVidas::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

ACreadorVidas* ACreadorVidas::iniciar()
{
    Vida1 = GetWorld()->SpawnActor<AVida1>(AVida1::StaticClass());
    Vida1->SetVida(this);

    //Spanw the No Coin State and set this Slot Machine to it
    Vida2 = GetWorld()->SpawnActor<AVida2>(AVida2::StaticClass());
    Vida2->SetVida(this);

    //Spanw the Coin Inserted State and set this Slot Machine to it
    Vida3 = GetWorld()->SpawnActor<AVida3>(AVida3::StaticClass());
    Vida3->SetVida(this);

    //Estado = Vida1;
    
    FTransform SpawnLocation;
    //UPROPERTY()
    GEngine->AddOnScreenDebugMessage(-1, 10, FColor::Green, TEXT("VIDA COMPLETA"));
    ACreadorVidas* Vidas = GetWorld()->SpawnActor<ACreadorVidas>(ACreadorVidas::StaticClass(), SpawnLocation);
    Vidas->VidaMesh->SetMaterial(0, materialVida0);

    //B->AttachToActor(this, FAttachmentTransformRules::KeepRelativeTransform);
    Vidas->SetActorRelativeLocation(FVector(0.000000, 88.000000, 156.000000));
    Vidas->SetActorRelativeRotation(FRotator( 0.000000, 180.000000,  0.000000));

    Estado = Vida1;
    return Vidas;
}

void ACreadorVidas::cambiarVida(ACreadorVidas* _Escenario)
{
    Estado->EstablecerVida(_Escenario);
}

void ACreadorVidas::cambiarEstado(IVidaFactory* _Estado)
{
    Estado = _Estado;
}



IVidaFactory* ACreadorVidas::getVida1()
{
    return Vida1;
}
IVidaFactory* ACreadorVidas::getVida2()
{
    return Vida2;
}
IVidaFactory* ACreadorVidas::getVida3()
{
    return Vida3;
}

IVidaFactory* ACreadorVidas::getEstado()
{
    return Estado;
}


//void ACreadorVidas::CreateVida()
//{
//	FVector SpawnLocation(0.0f, 8.0f, 16.0f);
//		FRotator Rotation(0.0, 0.0, 0.0);
//		AVida1* V1 = GetWorld()->SpawnActor<AVida1>(SpawnLocation, Rotation);
//}



