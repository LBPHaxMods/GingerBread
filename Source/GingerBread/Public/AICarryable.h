#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "AICarryable.generated.h"

class AGingerbreadAICharacter;

UINTERFACE()
class GINGERBREAD_API UAICarryable : public UInterface {
    GENERATED_BODY()
};

class GINGERBREAD_API IAICarryable : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION()
    virtual void OnSpawnedByAI() PURE_VIRTUAL(OnSpawnedByAI,);
    
    UFUNCTION()
    virtual void OnAIThrown(AGingerbreadAICharacter* ThrownBy) PURE_VIRTUAL(OnAIThrown,);
    
    UFUNCTION()
    virtual void OnAIPlaced(AGingerbreadAICharacter* PlacedBy) PURE_VIRTUAL(OnAIPlaced,);
    
    UFUNCTION()
    virtual void OnAIPickedUp(AGingerbreadAICharacter* PickedUpBy) PURE_VIRTUAL(OnAIPickedUp,);
    
    UFUNCTION()
    virtual void OnAIDropped(AGingerbreadAICharacter* DroppedBy) PURE_VIRTUAL(OnAIDropped,);
    
    UFUNCTION()
    virtual bool CanPickup() PURE_VIRTUAL(CanPickup, return false;);
    
};

