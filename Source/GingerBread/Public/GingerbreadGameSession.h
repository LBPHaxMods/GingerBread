#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameSession.h"
#include "GingerbreadGameSession.generated.h"

UCLASS(Blueprintable)
class GINGERBREAD_API AGingerbreadGameSession : public AGameSession {
    GENERATED_BODY()
public:
    AGingerbreadGameSession(const FObjectInitializer& ObjectInitializer);

};

