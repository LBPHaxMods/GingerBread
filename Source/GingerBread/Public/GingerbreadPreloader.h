#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GingerbreadPreloader.generated.h"

class UObject;

UCLASS(Blueprintable)
class AGingerbreadPreloader : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UObject*> PreloadReferences;
    
    AGingerbreadPreloader(const FObjectInitializer& ObjectInitializer);

};

