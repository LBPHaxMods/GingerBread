#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "WakeSleep.h"
#include "CollectableComponentBase.generated.h"

class ACollectableBase;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UCollectableComponentBase : public UActorComponent, public IWakeSleep {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ACollectableBase* pCollectableOwner;
    
public:
    UCollectableComponentBase(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

