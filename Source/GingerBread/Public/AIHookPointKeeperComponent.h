#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "AIHookPointKeeperComponent.generated.h"

class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UAIHookPointKeeperComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> CurrentHookPointActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DesiredHookPointDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CanSnapToTargetLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SnapToTargetAcceptanceRadius;
    
    UAIHookPointKeeperComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool TryUnregisterHookPoint();
    
    UFUNCTION(BlueprintCallable)
    bool TryRegisterHookPoint(AActor* hookPointActor, bool RequireClosestHP);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetHookpointLocation(FVector& OutLocation, bool NavmeshProjectHookpoint);
    
};

