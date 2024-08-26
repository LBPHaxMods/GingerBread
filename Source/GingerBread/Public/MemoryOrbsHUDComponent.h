#pragma once
#include "CoreMinimal.h"
#include "GingerbreadHUDComponent.h"
#include "MemoryOrbsHUDComponent.generated.h"

class UHudStaticMeshComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UMemoryOrbsHUDComponent : public UGingerbreadHUDComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OrbsInLevel;
    
public:
    UMemoryOrbsHUDComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PrepareMemoryOrbCollection();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleReplicatedOrb(int32 OrbID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GetOrbMeshAndSocketName(int32 OrbID, UHudStaticMeshComponent*& CloudStaticMesh, FName& SocketName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EnableMemoryOrb(int32 memoryOrbIndex);
    
    UFUNCTION(BlueprintCallable)
    void AddMemoryOrb(int32 memoryOrbIdx);
    
};

