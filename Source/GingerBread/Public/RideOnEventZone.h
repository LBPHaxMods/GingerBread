#pragma once
#include "CoreMinimal.h"
#include "ERideOnEventZoneType.h"
#include "RideOnEvent.h"
#include "Templates/SubclassOf.h"
#include "RideOnEventZone.generated.h"

class AActor;

UCLASS(Blueprintable)
class ARideOnEventZone : public ARideOnEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ARideOnEvent*> ConnectedEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeBetweenEvents;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERideOnEventZoneType ZoneType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSubclassOf<AActor>, int32> MaxActorsPerClass;
    
public:
    ARideOnEventZone(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void TriggerNextEvent();
    
};

