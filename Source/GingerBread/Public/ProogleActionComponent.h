#pragma once
#include "CoreMinimal.h"
#include "AIActionComponent.h"
#include "OnGrabLaunchDelegate.h"
#include "ProogleActionComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UProogleActionComponent : public UAIActionComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool ShouldBlockHitReaction;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGrabLaunch GrabLaunchCallback;
    
    UProogleActionComponent(const FObjectInitializer& ObjectInitializer);

};

