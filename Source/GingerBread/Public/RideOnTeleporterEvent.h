#pragma once
#include "CoreMinimal.h"
#include "RideOnEvent.h"
#include "RideOnTeleporterEvent.generated.h"

class UTextRenderComponent;

UCLASS(Blueprintable)
class ARideOnTeleporterEvent : public ARideOnEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextRenderComponent* TeleportTargetText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TeleportOffset;
    
    ARideOnTeleporterEvent(const FObjectInitializer& ObjectInitializer);

};

