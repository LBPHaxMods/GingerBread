#pragma once
#include "CoreMinimal.h"
#include "EventDetail.h"
#include "sku_id.generated.h"

class Usku_id;

UCLASS(Blueprintable)
class GAMEANALYTICS_API Usku_id : public UEventDetail {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString sku_id_value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString quantity;
    
    Usku_id();

    UFUNCTION(BlueprintCallable)
    static Usku_id* Newsku_id();
    
    UFUNCTION(BlueprintCallable)
    void Init(const FString& _sku_id_value);
    
};

