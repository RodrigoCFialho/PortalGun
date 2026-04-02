// Game Engine II - Portal Gun

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PortalWall.generated.h"

UCLASS()
class PORTALGUN_API APortalWall : public AActor
{
	GENERATED_BODY()


public:	
	// Sets default values for this actor's properties
	APortalWall();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Return the mesh for the pickup
	FORCEINLINE UStaticMeshComponent* GetMesh() const { return PortalWallMesh; }

private:
	// Static mesh to represent the wall in the level
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Pickup", meta = (allowprivateaccess = true))
	UStaticMeshComponent* PortalWallMesh;
};
