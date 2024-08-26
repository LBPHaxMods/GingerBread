#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RideOnPathActor.generated.h"

class ARideOnEvent;
class URideOnPathComponent;
class USceneComponent;
class USplineComponent;

UCLASS(Blueprintable)
class ARideOnPathActor : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* Root;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USplineComponent* Spline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URideOnPathComponent* RideOnPath;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ARideOnEvent*> Events;
    
    ARideOnPathActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    URideOnPathComponent* GetRideOnPathComponent();
    
};

