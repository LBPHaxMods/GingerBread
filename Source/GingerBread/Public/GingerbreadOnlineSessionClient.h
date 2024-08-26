#pragma once
#include "CoreMinimal.h"
#include "OnlineSessionClient.h"
#include "GingerbreadOnlineSessionClient.generated.h"

UCLASS(Blueprintable)
class GINGERBREAD_API UGingerbreadOnlineSessionClient : public UOnlineSessionClient {
    GENERATED_BODY()
public:
    UGingerbreadOnlineSessionClient();

};

