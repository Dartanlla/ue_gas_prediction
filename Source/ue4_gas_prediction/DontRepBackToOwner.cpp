// Richard Hähne 2019

#include "DontRepBackToOwner.h"

// Sets default values
ADontRepBackToOwner::ADontRepBackToOwner()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ADontRepBackToOwner::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ADontRepBackToOwner::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

bool ADontRepBackToOwner::IsNetRelevantFor(const AActor * RealViewer, const AActor * ViewTarget, const FVector & SrcLocation) const
{
	return !IsOwnedBy(ViewTarget);
}