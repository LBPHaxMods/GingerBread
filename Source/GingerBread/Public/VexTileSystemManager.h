#pragma once
#include "CoreMinimal.h"
#include "ProceduralActor.h"
#include "VexTileSystemManager.generated.h"

UCLASS(Blueprintable)
class AVexTileSystemManager : public AProceduralActor {
    GENERATED_BODY()
public:
    AVexTileSystemManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetRotationYaw(float Yaw);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetMovementSpeed(float Speed);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnJumpStart();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnJumpLand();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnJumpApexReached();
    
};

