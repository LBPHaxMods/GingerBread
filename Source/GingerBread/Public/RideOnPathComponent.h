#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PathSpline.h"
#include "RideOnPathComponent.generated.h"

class AActor;
class UDarkMatterEngine;
class URideOnPathEventComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class URideOnPathComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* VehicleActor;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDarkMatterEngine* Engine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPathSpline> Splines;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PathWidthScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PathHeightScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisplayPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisplayPathAll;
    
public:
    URideOnPathComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UnregisterPathEvent(URideOnPathEventComponent* path_event);
    
    UFUNCTION(BlueprintCallable)
    void RegisterPathEvent(URideOnPathEventComponent* path_event);
    
    UFUNCTION(BlueprintCallable)
    int32 FindPathSpline(AActor* spline_actor);
    
};

