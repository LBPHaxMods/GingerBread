#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ERammerTurnToTargetType.h"
#include "RammerTurnToTargetConfig.h"
#include "RammerTurnToTargetAnticipationComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class URammerTurnToTargetAnticipationComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ERammerTurnToTargetType, FRammerTurnToTargetConfig> TurnToTargetConfigs;
    
    URammerTurnToTargetAnticipationComponent(const FObjectInitializer& ObjectInitializer);

};

