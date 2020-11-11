#include "BasePlatform.h"

void ABasePlatform::MovePlatform()
{
	
}

ABasePlatform::ABasePlatform()

{
	PrimaryActorTick.bCanEverTick = true;
	USceneComponent* DefaultPlatformRoot = CreateDefaultSubobject<USceneComponent>(TEXT("Platform root"));

	RootComponent = DefaultPlatformRoot;

	PlatformMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Platform"));
	PlatformMesh->SetupAttachment(DefaultPlatformRoot);

}

void ABasePlatform::BeginPlay()
{
	Super::BeginPlay();
	//Defining start location
	StartLocation = PlatformMesh->GetRelativeLocation();
}



void ABasePlatform::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}