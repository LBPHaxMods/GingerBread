#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ControlModePickupAnimationProxy.generated.h"

class USceneComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class GINGERBREAD_API AControlModePickupAnimationProxy : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USceneComponent* SceneRootComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* MeshComponent;
    
public:
    AControlModePickupAnimationProxy(const FObjectInitializer& ObjectInitializer);

};

