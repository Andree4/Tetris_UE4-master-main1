// Fill out your copyright notice in the Description page of Project Settings.


#include "BloqueBuilderPasto.h"

ABloqueBuilderPasto::ABloqueBuilderPasto()
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
	Material1 = Cast<UMaterial>(StaticLoadObject(UMaterial::StaticClass(), nullptr, TEXT("Material'/Game/StarterContent/Materials/M_Ground_Grass.M_Ground_Grass'")));
	Mesh->SetMaterial(0, Material1);
}

void ABloqueBuilderPasto::SetMaterial(FString myMaterial)
{
	Material = myMaterial;
}
