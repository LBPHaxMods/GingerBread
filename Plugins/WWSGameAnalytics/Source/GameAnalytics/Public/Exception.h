#pragma once
#include "CoreMinimal.h"
#include "EventDetail.h"
#include "Exception.generated.h"

class UException;

UCLASS(Blueprintable)
class GAMEANALYTICS_API UException : public UEventDetail {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString event_type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString error_message;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString stack;
    
    UException();

    UFUNCTION(BlueprintCallable)
    static UException* NewException();
    
    UFUNCTION(BlueprintCallable)
    void Init();
    
};

