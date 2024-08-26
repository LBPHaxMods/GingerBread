#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "JumpPointVolumeActor.generated.h"

class UJumpPositioningBoundVolume;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class AJumpPointVolumeActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UJumpPositioningBoundVolume* PositioningVolumeComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* StaticMeshComponent;
    
    AJumpPointVolumeActor(const FObjectInitializer& ObjectInitializer);

};

