#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Velociportable.generated.h"

UINTERFACE(Blueprintable)
class GINGERBREAD_API UVelociportable : public UInterface {
    GENERATED_BODY()
};

class GINGERBREAD_API IVelociportable : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnSackboyExitVelociporter(FVector ExitLocation, FRotator ExitRotation, FVector ExitVelocity, bool disableAirSteer, bool disableAirActions);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnExitVelociporter(FVector ExitLocation, FRotator ExitRotation, FVector ExitVelocity);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnEnterVelociporter(FVector ExitLocation, FRotator ExitRotation);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsVelociportable();
    
};

