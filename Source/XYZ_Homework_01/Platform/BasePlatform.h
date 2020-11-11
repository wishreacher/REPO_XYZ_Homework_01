#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BasePlatform.generated.h"

UENUM()
enum class EPlatformBehavior : uint8
{
	OnDemand = 0,
	Loop
};

UCLASS()
class XYZ_HOMEWORK_01_API ABasePlatform : public AActor
{

	GENERATED_BODY()

public:

	//Choosing mesh for the platform
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	UStaticMeshComponent* PlatformMesh;

	//Platform move function
	UFUNCTION(BlueprintCallable)
	void MovePlatform();

	//Get platform end location
	UPROPERTY(EditInstanceOnly, BlueprintReadOnly, meta = (MakeEditWidget))
	FVector EndLocation;

	//Get platform end location
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Transient)
	FVector StartLocation;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	EPlatformBehavior PlatformBehavior = EPlatformBehavior::OnDemand;

	ABasePlatform();

protected:
	virtual void BeginPlay() override;
public:
	virtual void Tick(float DeltaTime) override;
};