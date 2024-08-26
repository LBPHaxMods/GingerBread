#pragma once

#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "PlayerCountActor.h"
#include "ButtBomberSpawner.generated.h"

class AButtbomber;

UCLASS(Blueprintable)
class AButtBomberSpawner : public APlayerCountActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AButtbomber> buttbomberClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseFlightZones;
    
public:
    AButtBomberSpawner(const FObjectInitializer& ObjectInitializer);

};

