// Fill out your copyright notice in the Description page of Project Settings.


#include "AdapterMovimiento.h"
#include "Movimiento.h"

// Sets default values
AAdapterMovimiento::AAdapterMovimiento()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AAdapterMovimiento::BeginPlay()
{
	Super::BeginPlay();
	
	enemigo = GetWorld()->SpawnActor<AMovimiento>(AMovimiento::StaticClass());
}

// Called every frame
void AAdapterMovimiento::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AAdapterMovimiento::Mover()
{
	if (!enemigo) {
		UE_LOG(LogTemp, Error, TEXT("Sling(): Weapon es NULL, asegurese de que este inicializada."));
		return;
	}
	enemigo->Moverse();
}

