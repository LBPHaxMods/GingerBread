#pragma once
#include "CoreMinimal.h"
#include "TargetableComponent.h"
#include "ThrowTargetEventDelegate.h"
#include "ThrowTargetComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GINGERBREAD_API UThrowTargetComponent : public UTargetableComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ThrowPitch;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FThrowTargetEvent OnObjectThrownTowardsTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TargetTag;
    
    UThrowTargetComponent(const FObjectInitializer& ObjectInitializer);

};

