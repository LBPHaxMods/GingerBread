#pragma once
#include "CoreMinimal.h"
#include "AdvancedEmitter.h"
#include "Templates/SubclassOf.h"
#include "PhaseBombBabySpawner.generated.h"

class APhaseBombBaby;

UCLASS(Blueprintable)
class APhaseBombBabySpawner : public AAdvancedEmitter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FinalRadiusSize;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<APhaseBombBaby> PhaseBombBabyClass;
    
public:
    APhaseBombBabySpawner(const FObjectInitializer& ObjectInitializer);

};

