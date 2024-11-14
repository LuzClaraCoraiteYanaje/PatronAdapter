// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "PatronAdapterGameMode.generated.h"

UCLASS(minimalapi)
class APatronAdapterGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	APatronAdapterGameMode();

protected:
	virtual void BeginPlay() override;
public:
	virtual void Tick(float DeltaTime) override;

	class AEnemigo* enemigos;
	class AAdapterMovimiento* EnemigoMover;
};



