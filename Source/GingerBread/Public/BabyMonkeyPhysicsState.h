#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BabyMonkeyPhysicsState.generated.h"

USTRUCT(BlueprintType)
struct FBabyMonkeyPhysicsState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LinearDamping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AngularDamping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector CentreOfMass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SimulatePhysics;
    
    GINGERBREAD_API FBabyMonkeyPhysicsState();
};

