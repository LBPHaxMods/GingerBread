#pragma once
#include "CoreMinimal.h"
#include "EPlayerJoinDirection.h"
#include "GingerbreadHUDComponent.h"
#include "GingerbreadPlayerId.h"
#include "OffScreenIndicatorHUDComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UOffScreenIndicatorHUDComponent : public UGingerbreadHUDComponent {
    GENERATED_BODY()
public:
    UOffScreenIndicatorHUDComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void OnPlayerJoinLeaveEvent(EPlayerJoinDirection Direction, const FGingerbreadPlayerId& player_id, bool forced);
    
};

