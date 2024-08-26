#pragma once
#include "CoreMinimal.h"
#include "AdvancedEmitter.h"
#include "Templates/SubclassOf.h"
#include "CrumplerSpawner.generated.h"

class ACrumpler;

UCLASS(Blueprintable)
class ACrumplerSpawner : public AAdvancedEmitter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStartCrumple;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ACrumpler> CrumplerClass;
    
public:
    ACrumplerSpawner(const FObjectInitializer& ObjectInitializer);

};

