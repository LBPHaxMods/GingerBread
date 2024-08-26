#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "StompnadoSpaceLaser.generated.h"

class UMaterialInterface;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class AStompnadoSpaceLaser : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* LaserMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxWidthMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* LaserMaterial;
    
    AStompnadoSpaceLaser(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void InitialiseLaser(AActor* FromActor, AActor* ToActor);
    
    UFUNCTION(BlueprintCallable)
    void DisableLaser();
    
};

