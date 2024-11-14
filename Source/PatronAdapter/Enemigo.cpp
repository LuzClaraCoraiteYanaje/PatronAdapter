// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemigo.h"

// Sets default values
AEnemigo::AEnemigo()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset = ConstructorHelpers::FObjectFinder<UStaticMesh>(TEXT("StaticMesh'/Game/Geometry/Meshes/1M_Cube_Chamfer.1M_Cube_Chamfer'"));
	MeshEnemigo = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	MeshEnemigo->SetStaticMesh(MeshAsset.Object);
	MeshEnemigo->SetRelativeScale3D(FVector(1.5f, 1.5f, 1.5f));
	RootComponent = MeshEnemigo;
}

// Called when the game starts or when spawned
void AEnemigo::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEnemigo::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	Mover();
}


void AEnemigo::SetMoverse(AActor* ObjetoMovimiento)
{
	adapter = Cast<IAdaptador>(ObjetoMovimiento);
	if (!adapter) {
		GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow,
			FString::Printf(TEXT("SetMoverse(): El actor pasado no pudo convetirse a tipo IAdapter")));
	}
}
void AEnemigo::Mover()
{
	if (!adapter) {
		GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow,
			FString::Printf(TEXT("Mover(): El adaptador es null, revise la conversion")));
		return;
	}
	else {
		adapter->Mover();
	}
}



