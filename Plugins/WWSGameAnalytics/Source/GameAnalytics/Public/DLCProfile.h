#pragma once
#include "CoreMinimal.h"
#include "EventDetail.h"
#include "DLCProfile.generated.h"

class UDLCProfile;

UCLASS(Blueprintable)
class GAMEANALYTICS_API UDLCProfile : public UEventDetail {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString event_type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> sku;
    
    UDLCProfile();

    UFUNCTION(BlueprintCallable)
    static UDLCProfile* NewDLCProfile();
    
    UFUNCTION(BlueprintCallable)
    void Init();
    
};

