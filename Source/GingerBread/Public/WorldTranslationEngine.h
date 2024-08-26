#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "WorldTranslationEngine.generated.h"

class USplineComponent;

UCLASS(Blueprintable)
class AWorldTranslationEngine : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Speed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USplineComponent* SplineComponent;
    
    AWorldTranslationEngine(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void AddTargetActors(const TArray<AActor*>& Actors);
    
};

