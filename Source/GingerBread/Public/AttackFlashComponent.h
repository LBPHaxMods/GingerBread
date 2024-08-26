#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AttackFlashComponent.generated.h"

class UCurveFloat;
class UMeshComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UAttackFlashComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AttackFlashEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* AttackFlashCurve;
    
    UAttackFlashComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void TriggerAttackFlash();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void EndAttackFlash();
    
    UFUNCTION(BlueprintCallable)
    void CreateDynamicMaterialsForMesh(UMeshComponent* Mesh);
    
};

