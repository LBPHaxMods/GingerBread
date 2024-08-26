#pragma once
#include "CoreMinimal.h"
#include "EventDetail.h"
#include "OpaqueData.generated.h"

class UOpaqueData;

UCLASS(Blueprintable)
class GAMEANALYTICS_API UOpaqueData : public UEventDetail {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Version;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Data;
    
    UOpaqueData();

    UFUNCTION(BlueprintCallable)
    static UOpaqueData* NewOpaqueData();
    
    UFUNCTION(BlueprintCallable)
    void Init(const FString& _version, const FString& _data);
    
};

