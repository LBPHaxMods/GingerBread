#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CollisionPairTestBase.generated.h"

UCLASS(Blueprintable)
class ACollisionPairTestBase : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ResetCollisionFiltering;
    
    ACollisionPairTestBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool ResetCollision();
    
    UFUNCTION(BlueprintCallable)
    bool DisableCollisionWith(AActor* Other);
    
};

