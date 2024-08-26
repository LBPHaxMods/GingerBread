#pragma once
#include "CoreMinimal.h"
#include "ControlMode.h"
#include "OnBoomerangCollisionEventDelegate.h"
#include "BoomerangMode.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBoomerangMode : public UControlMode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBoomerangCollisionEvent OnBoomerangCollision;
    
    UBoomerangMode(const FObjectInitializer& ObjectInitializer);

};

