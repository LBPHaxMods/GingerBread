#pragma once
#include "CoreMinimal.h"
#include "EventDetail.h"
#include "Geo.generated.h"

class UGeo;

UCLASS(Blueprintable)
class GAMEANALYTICS_API UGeo : public UEventDetail {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString geo_country;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString geo_city;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString geo_region;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString geo_zipcode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float geo_latitude;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float geo_longitude;
    
    UGeo();

    UFUNCTION(BlueprintCallable)
    static UGeo* NewGeo();
    
    UFUNCTION(BlueprintCallable)
    void Init();
    
};

