#pragma once
#include "CoreMinimal.h"
//#include "EBool.h"
#include "EventDetail.h"
#include "entitlement.generated.h"

class Uentitlement;

UCLASS(Blueprintable)
class GAMEANALYTICS_API Uentitlement : public UEventDetail {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString inactive_date;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString active_date;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 use_count;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString entitlement_type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool is_consumable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 use_limit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 preorder_flag;
    
    Uentitlement();

    UFUNCTION(BlueprintCallable)
    static Uentitlement* Newentitlement();
    
    UFUNCTION(BlueprintCallable)
    void Init(const FString& _id);
    
};

