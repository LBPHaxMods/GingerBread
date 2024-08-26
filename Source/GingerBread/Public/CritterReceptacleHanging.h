#pragma once
#include "CoreMinimal.h"
#include "CritterReceptacle.h"
#include "CritterReceptacleHanging.generated.h"

class UStaticMeshComponent;

UCLASS(Abstract, Blueprintable)
class ACritterReceptacleHanging : public ACritterReceptacle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* TripodString;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* HangingString;
    
    ACritterReceptacleHanging(const FObjectInitializer& ObjectInitializer);

};

