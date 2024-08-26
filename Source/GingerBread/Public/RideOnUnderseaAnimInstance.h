#pragma once
#include "CoreMinimal.h"
#include "RideOnVehicleAnimInstance.h"
#include "RideOnUnderseaAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class GINGERBREAD_API URideOnUnderseaAnimInstance : public URideOnVehicleAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SharpTiltRight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool FishRamsBoat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CrashFloor;
    
public:
    URideOnUnderseaAnimInstance();

};

