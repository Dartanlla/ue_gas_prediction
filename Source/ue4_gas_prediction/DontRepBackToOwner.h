// Richard Hähne 2019

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DontRepBackToOwner.generated.h"

UCLASS()
class UE4_GAS_PREDICTION_API ADontRepBackToOwner : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADontRepBackToOwner();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual bool IsNetRelevantFor(const AActor* RealViewer, const AActor* ViewTarget, const FVector& SrcLocation) const override;
};
