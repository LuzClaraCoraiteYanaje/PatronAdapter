// Copyright Epic Games, Inc. All Rights Reserved.

#include "PatronAdapterGameMode.h"
#include "PatronAdapterCharacter.h"
#include "UObject/ConstructorHelpers.h"

#include "Enemigo.h"
#include "AdapterMovimiento.h"

APatronAdapterGameMode::APatronAdapterGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/SideScrollerCPP/Blueprints/SideScrollerCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

void APatronAdapterGameMode::BeginPlay()
{
	Super::BeginPlay();

	FVector PosicionDeseada(1260.0f, 560.0f, 450.0f);
	EnemigoMover = GetWorld()->SpawnActor<AAdapterMovimiento>(AAdapterMovimiento::StaticClass());
	enemigos = GetWorld()->SpawnActor<AEnemigo>(AEnemigo::StaticClass());

	enemigos->SetActorLocation(PosicionDeseada);
	enemigos->SetMoverse(EnemigoMover);
	enemigos->Mover();
}

void APatronAdapterGameMode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
