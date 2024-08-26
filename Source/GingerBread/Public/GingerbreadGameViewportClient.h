#pragma once
#include "CoreMinimal.h"
#include "Engine/GameViewportClient.h"
#include "GingerbreadGameViewportClient.generated.h"

UCLASS(Blueprintable, NonTransient)
class GINGERBREAD_API UGingerbreadGameViewportClient : public UGameViewportClient {
    GENERATED_BODY()
public:
    UGingerbreadGameViewportClient();

};

