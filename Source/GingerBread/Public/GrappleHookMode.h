#pragma once
#include "CoreMinimal.h"
#include "ControlMode.h"
#include "Templates/SubclassOf.h"
#include "GrappleHookMode.generated.h"

class AActor;
class AGrapplingHook;
class ASackboy;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UGrappleHookMode : public UControlMode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AGrapplingHook> GrappleHookClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGrapplingHook* GrappleHookActor;
    
public:
    UGrappleHookMode(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    static ASackboy* GetOwningSackboy(AActor* NewGrappleHookActor);
    
};

