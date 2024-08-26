#pragma once
#include "CoreMinimal.h"
#include "EventDetail.h"
#include "StoreMenuScreen.generated.h"

class UStoreMenuScreen;

UCLASS(Blueprintable)
class GAMEANALYTICS_API UStoreMenuScreen : public UEventDetail {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString event_type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString store_session_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString screen_id;
    
    UStoreMenuScreen();

    UFUNCTION(BlueprintCallable)
    static UStoreMenuScreen* NewStoreMenuScreen();
    
    UFUNCTION(BlueprintCallable)
    void Init(const FString& _store_session_id, const FString& _screen_id);
    
};

