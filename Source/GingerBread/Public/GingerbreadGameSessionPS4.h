#pragma once
#include "CoreMinimal.h"
#include "GingerbreadGameSession.h"
#include "GingerbreadGameSessionPS4.generated.h"

UCLASS(Blueprintable)
class GINGERBREAD_API AGingerbreadGameSessionPS4 : public AGingerbreadGameSession {
    GENERATED_BODY()
public:
    AGingerbreadGameSessionPS4(const FObjectInitializer& ObjectInitializer);

};

