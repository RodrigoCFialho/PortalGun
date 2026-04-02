// Game Engine II - Portal Gun


#include "PortalWall.h"

// Sets default values
APortalWall::APortalWall()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	// Create the static mesh component
	PortalWallMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PortalWallMesh"));
	RootComponent = PortalWallMesh;
}

// Called when the game starts or when spawned
void APortalWall::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void APortalWall::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}