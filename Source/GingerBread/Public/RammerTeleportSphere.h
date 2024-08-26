#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "RammerTeleportSphereEventDelegate.h"
#include "RammerTeleportSphere.generated.h"

UCLASS(Blueprintable)
class ARammerTeleportSphere : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRammerTeleportSphereEvent OnPortalFinishedOpening;
    
    ARammerTeleportSphere(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OpenPortalExit();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OpenPortalEntrance();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InitialisePortal(const FVector& Location, const FRotator& Rotation);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ClosePortalExit();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ClosePortalEntrance();
    
};

