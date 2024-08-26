#pragma once
#include "CoreMinimal.h"
#include "SniperNeedleBase.h"
#include "SniperNeedleSpace.generated.h"

class UHitPointsModifierComponent;
class UInteractionComponent;
class UParticleSystem;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class ASniperNeedleSpace : public ASniperNeedleBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* ExplosionSphereMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInteractionComponent* ExplosionInteraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHitPointsModifierComponent* ExplosionHitPointsModifierComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExplosionRadiusCM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* ExplosionVFXTemplate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Acceleration;
    
    ASniperNeedleSpace(const FObjectInitializer& ObjectInitializer);

};

