#pragma once
#include "CoreMinimal.h"
//#include "EBool.h"
#include "EventDetail.h"
#include "NetworkProfile.generated.h"

class UNetworkProfile;

UCLASS(Blueprintable)
class GAMEANALYTICS_API UNetworkProfile : public UEventDetail {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString event_type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 nat_type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool wifi;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString mac_address;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString router_manufacturer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString router_model_name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString router_model_number;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float bw_upload_bps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float bw_download_bps;
    
    UNetworkProfile();

    UFUNCTION(BlueprintCallable)
    static UNetworkProfile* NewNetworkProfile();
    
    UFUNCTION(BlueprintCallable)
    void Init(int32 _nat_type, bool _wifi);
    
};

