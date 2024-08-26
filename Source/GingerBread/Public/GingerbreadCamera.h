#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GingerbreadCamera.generated.h"

UCLASS(Blueprintable)
class GINGERBREAD_API AGingerbreadCamera : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NearClipPlaneCm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FarClipPlaneCm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsActive;
    
    AGingerbreadCamera(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActive() const;
    
    UFUNCTION(BlueprintCallable)
    void ApplyNearClipPlane();
    
    UFUNCTION(BlueprintCallable)
    void ApplyFarClipPlane();
    
};

