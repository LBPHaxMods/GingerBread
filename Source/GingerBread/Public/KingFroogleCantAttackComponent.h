#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "KingFroogleCantAttackComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UKingFroogleCantAttackComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PostTurnAnimTime;
    
    UKingFroogleCantAttackComponent(const FObjectInitializer& ObjectInitializer);

};

