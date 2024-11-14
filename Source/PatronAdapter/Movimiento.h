// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Movimiento.generated.h"

UCLASS()
class PATRONADAPTER_API AMovimiento : public AActor // GALAGA_USFX_API
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMovimiento();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

    //// Componente de malla
    //UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Enemigo")
    //UStaticMeshComponent* EnemigoMesh;

    // Variables para movimiento
    FVector posicionActualY;
    FVector posicionFinalY;
    FVector posicionInicialY;
    FVector inicialY;

    FVector posicionInicialZ;
    FVector posicionActualZ;
    FVector posicionFinalZ;
    FVector inicialZ;

    float incremento;
    bool moverseY;
    bool moverseZ;

	void Moverse();

};
