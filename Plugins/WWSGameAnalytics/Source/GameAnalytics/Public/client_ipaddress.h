#pragma once
#include "CoreMinimal.h"
#include "EventDetail.h"
#include "client_ipaddress.generated.h"

class Uclient_ipaddress;

UCLASS(Blueprintable)
class GAMEANALYTICS_API Uclient_ipaddress : public UEventDetail {
    GENERATED_BODY()
public:
    Uclient_ipaddress();

    UFUNCTION(BlueprintCallable)
    static Uclient_ipaddress* Newclient_ipaddress();
    
    UFUNCTION(BlueprintCallable)
    void Init();
    
};

