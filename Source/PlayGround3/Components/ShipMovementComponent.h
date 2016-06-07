#include "GameFramework/PawnMovementComponent.h"
#include "ShipMovementComponent.generated.h"

	/**
	*
	*/
UCLASS()
class HOWTO_COMPONENTS_API UShipMovementComponent : public UPawnMovementComponent
{
	GENERATED_BODY()

public:
	virtual void TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction *ThisTickFunction) override;
};