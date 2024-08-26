#pragma once
#include "CoreMinimal.h"
#include "EventDetail.h"
#include "Entitlements.generated.h"

class UEntitlements;
class Uentitlement;

UCLASS(Blueprintable)
class GAMEANALYTICS_API UEntitlements : public UEventDetail {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString event_type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<Uentitlement*> entitlements_array;
    
    UEntitlements();

    UFUNCTION(BlueprintCallable)
    static UEntitlements* NewEntitlements();
    
    UFUNCTION(BlueprintCallable)
    void Init();
    
};

