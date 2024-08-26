#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "RammerSimpleArmourDelegateDelegate.h"
#include "RammerArmourComponent.generated.h"

class UCapsuleComponent;
class UCurveFloat;
class UInteractionComponent;
class USkeletalMeshComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class URammerArmourComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* ArmourDissolveCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ArmourDissolveDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ArmourChangeDuration;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRammerSimpleArmourDelegate OnArmourEnabled;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRammerSimpleArmourDelegate OnArmourDisabled;
    
    URammerArmourComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void InitialiseArmourComponent(USkeletalMeshComponent* ArmourMesh, UCapsuleComponent* PhaseCapsule, UInteractionComponent* InteractionPhaseCapsule);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsEnabled() const;
    
};

