#pragma once
#include "CoreMinimal.h"
#include "Stompy.h"
#include "StompySpace.generated.h"

class UBoxComponent;
class UHitPointsModifierComponent;
class UStompySpaceLinkComponent;
class UStompySpinSpaceComponent;

UCLASS(Blueprintable)
class AStompySpace : public AStompy {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStompySpinSpaceComponent* StompySpinSpaceComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStompySpaceLinkComponent* StompySpaceLinkComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* StompyHeadDamageAuraCollider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHitPointsModifierComponent* StompyDamageAuraModifier;
    
    AStompySpace(const FObjectInitializer& ObjectInitializer);

};

