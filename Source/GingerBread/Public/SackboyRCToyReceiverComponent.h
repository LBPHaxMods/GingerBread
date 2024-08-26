#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CameraPointOfInterest.h"
#include "RegistrationComponent.h"
#include "SackboyRCToyEventDelegate.h"
#include "SackboyRCToyInputEventDelegate.h"
#include "SackboyRCToyReceiverComponent.generated.h"

class AActor;
class ASackboy;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USackboyRCToyReceiverComponent : public URegistrationComponent, public ICameraPointOfInterest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSackboyRCToyEvent OnSackboyControlStartEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSackboyRCToyEvent OnSackboyControlStopEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSackboyRCToyInputEvent OnSackboyInputEvent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFocusPointEnabled;
    
public:
    USackboyRCToyReceiverComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void OnSackboyControlStop(ASackboy* Sackboy);
    
    UFUNCTION(BlueprintCallable)
    void OnSackboyControlStart(ASackboy* Sackboy);
    
    UFUNCTION(BlueprintCallable)
    void OnSackboyControlInput(ASackboy* Sackboy, FVector stick_input, bool actionA, bool actionB);
    
    UFUNCTION(BlueprintCallable)
    void OnCameraManagerAvailable(AActor* ManagerActor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ASackboy* GetSackboy() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetGravityVector() const;
    

    // Fix for true pure virtual functions not being implemented
};

