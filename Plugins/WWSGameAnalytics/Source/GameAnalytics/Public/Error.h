#pragma once
#include "CoreMinimal.h"
#include "EventDetail.h"
#include "Error.generated.h"

class UError;

UCLASS(Blueprintable)
class GAMEANALYTICS_API UError : public UEventDetail {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString event_type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString error_type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString error_code;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString error_message;
    
    UError();

    UFUNCTION(BlueprintCallable)
    static UError* NewError();
    
    UFUNCTION(BlueprintCallable)
    void Init(const FString& _error_type, const FString& _error_code);
    
};

