// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Adaptador.h"
#include "AdapterMovimiento.generated.h"

UCLASS()
class PATRONADAPTER_API AAdapterMovimiento : public AActor , public IAdaptador
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AAdapterMovimiento();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void Mover() override;
private:
	UPROPERTY();
	class AMovimiento* enemigo;
};
