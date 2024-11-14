// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Adaptador.h"
#include "Enemigo.generated.h"

UCLASS()
class PATRONADAPTER_API AEnemigo : public AActor  ,public IAdaptador
{
	GENERATED_BODY()
	
public:	

	AEnemigo();

protected:

	virtual void BeginPlay() override;

	class UStaticMeshComponent* MeshEnemigo;

private:
	IAdaptador* adapter;

public:	

	virtual void Tick(float DeltaTime) override;

	void Mover() override;

	void SetMoverse(AActor*  ObjetoMovimiento);
};
