#pragma once
#include "CoreMinimal.h"
#include "GingerbreadGameSession.h"
#include "GingerbreadGameSessionWindows.generated.h"

UCLASS(Blueprintable)
class GINGERBREAD_API AGingerbreadGameSessionWindows : public AGingerbreadGameSession {
    GENERATED_BODY()
public:
    AGingerbreadGameSessionWindows(const FObjectInitializer& ObjectInitializer);

};

