#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "KingFroogleSuperAnticipateComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UKingFroogleSuperAnticipateComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AnticipationDuration;
    
    UKingFroogleSuperAnticipateComponent(const FObjectInitializer& ObjectInitializer);

};

