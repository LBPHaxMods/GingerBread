#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "BaseVehicle.generated.h"

class ACameraArea;
class UCreationBaseComponent;

UCLASS(Blueprintable)
class GINGERBREAD_API ABaseVehicle : public APawn {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseFollowCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACameraArea* VehicleCameraArea;
    
    ABaseVehicle(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetVehicleCamera(bool State);
    
    UFUNCTION(BlueprintCallable)
    void SetCreationObject(UCreationBaseComponent* Object);
    
    UFUNCTION(BlueprintCallable)
    UCreationBaseComponent* GetCreationObject();
    
};

