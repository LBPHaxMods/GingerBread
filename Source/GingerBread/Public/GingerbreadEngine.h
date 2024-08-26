#pragma once
#include "CoreMinimal.h"
#include "Engine/GameEngine.h"
#include "GingerbreadEngine.generated.h"

UCLASS(Blueprintable, NonTransient)
class GINGERBREAD_API UGingerbreadEngine : public UGameEngine {
    GENERATED_BODY()
public:
    UGingerbreadEngine();

};

