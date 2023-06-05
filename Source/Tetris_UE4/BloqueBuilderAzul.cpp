// Fill out your copyright notice in the Description page of Project Settings.


#include "BloqueBuilderAzul.h"



// Sets default values
ABloqueBuilderAzul::ABloqueBuilderAzul()
{
	
	static ConstructorHelpers::FObjectFinder<UStaticMesh> BlockMeshAsset(TEXT("StaticMesh'/Game/Mesh/block.block'"));

	if (BlockMeshAsset.Succeeded())
	{
		/*BlockMesh->SetStaticMesh(BlockMeshAsset.Object);*/
		Mesh->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));

		Mesh->SetWorldScale3D(FVector(1.0f, 1.0f, 1.0f));

	}
	else {
		UE_LOG(LogTemp, Warning, TEXT("No existe la malla para Block"));
	}
	Material1 = Cast<UMaterial>(StaticLoadObject(UMaterial::StaticClass(), nullptr, TEXT("Material'/Game/Mesh/Material_1.Material_1'")));
	Mesh->SetMaterial(0, Material1);

}

void ABloqueBuilderAzul::SetMaterial(FString myMaterial)
{
	//ABloqueBuilderAzul* BloqA = ABloqueBuilderAzul::GetInstanciaBloqA(); // Obtén la instancia de ABloqueBuilderAzul
	//ABloqueBuilderAzul* BloqB = ABloqueBuilderAzul::GetInstanciaBloqA();
	Material = myMaterial;
	/*NotifyObservers();*/
}
////singleton
//ABloqueBuilderAzul* ABloqueBuilderAzul::instancia = nullptr;
//ABloqueBuilderAzul* ABloqueBuilderAzul::GetInstanciaBloqA()
//{
//	if (instancia == nullptr) { 
//		instancia = NewObject<ABloqueBuilderAzul>(); 
//		GEngine->AddOnScreenDebugMessage(-1, 10, FColor::Green, TEXT("se creo instancia a BloqA"));
//	}
//	else {
//		GEngine->AddOnScreenDebugMessage(-1, 10, FColor::Green, TEXT("Instancia ya creada"));
//	}
//	return instancia;
//}
//
//void ABloqueBuilderAzul::RegisterObserver(IObserver* Observer)
//{
//	Observers.AddUnique(Observer);
//}
//
//void ABloqueBuilderAzul::RemoveObserver(IObserver* Observer)
//{
//	Observers.Remove(Observer);
//}
//
//void ABloqueBuilderAzul::NotifyObservers()
//{
//	for (IObserver* Observer : Observers)
//	{
//		Observer->OnNotify();
//	}
//}




